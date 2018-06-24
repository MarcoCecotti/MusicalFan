#include "spiCTRL.h"

// McBsp Buffer
uint16_t rx_buffer[BUFFER_SIZE];
uint16_t tx_buffer[BUFFER_SIZE];

#pragma DATA_SECTION(rx_buffer, "DMARAML8")
#pragma DATA_SECTION(tx_buffer, "DMARAML8")

// CRC table for McBsp
static uint16_t crc_table[256];

#define POLY ((uint16_t)0x1021)
#define START ((uint16_t)0xFFFF)

void GenerateCrcTable(void)
{
    uint16_t i, j;
    uint16_t crc;

    for (i = 0; i < 256; i++)
    {
        crc = i << 8;
        for (j = 0; j < 8; j++)
        {
            if (crc & 0x8000)
                crc = (crc << 1) ^ POLY;
            else
                crc <<= 1;
        }
        crc_table[i] = crc;
    }
} // end of GenerateCrcTable() function

uint16_t CalcCrc(uint16_t *data, uint16_t len_words)
{
    uint16_t crc = START;
    uint16_t i;
    uint16_t idx;
    uint16_t octet;

    for (i = 0; i < len_words; ++i)
    {
        octet = data[i] & 0xFF;

        idx = ((crc >> 8) & 0xff) ^ octet;
        crc = (crc << 8) ^ crc_table[idx];

        octet = (data[i] >> 8) & 0xFF;
        idx = ((crc >> 8) & 0xff) ^ octet;
        crc = (crc << 8) ^ crc_table[idx];

    }
    return crc;
}// end of CalcCrc() function

uint16_t GetNewSetpoints(DMA_Handle DMAhandle, tEspRx *my_esp_rx, tEspTx *my_esp_tx)
{
	static int EspSuccessfullCountdown = REQUIRED_SUCCESSFUL_ESP_TRANSACTIONS;
	static uint16_t offset_rx;
	uint16_t CH2_start_idx_write_block_plus_NUM_BUFFER;
	uint16_t CH1_start_idx_read_block_plus_NUM_BUFFER;
	uint16_t CH2_start_idx_read_block;
	uint16_t CH1_start_idx_write_block;
	uint32_t ch1_addr, ch2_addr;
	static uint32_t recv_addr_last = (uint32_t)rx_buffer;

	ch2_addr = DMAhandle->CH2.DST_ADDR_ACTIVE;
    ch1_addr = DMAhandle->CH1.SRC_ADDR_ACTIVE;

	// check we're not in mid-transfer and if we are, reload addresses to keep them synchronized
    if ((ch2_addr != DMAhandle->CH2.DST_ADDR_ACTIVE) || (ch1_addr != DMAhandle->CH1.SRC_ADDR_ACTIVE))
	{
    ch2_addr = DMAhandle->CH2.DST_ADDR_ACTIVE;
    ch1_addr = DMAhandle->CH1.SRC_ADDR_ACTIVE;
	}

#define OFFSET_RX_TX ((3*DATA_SIZE)-2)

	CH2_start_idx_write_block_plus_NUM_BUFFER = ((ch2_addr - (uint32_t)rx_buffer + DATA_SIZE*NUM_BUFFER - offset_rx )/DATA_SIZE)*DATA_SIZE + offset_rx;
	CH2_start_idx_read_block = (CH2_start_idx_write_block_plus_NUM_BUFFER -1 - DATA_SIZE) % (NUM_BUFFER*DATA_SIZE);

	CH1_start_idx_read_block_plus_NUM_BUFFER = ((ch1_addr - (uint32_t)tx_buffer + DATA_SIZE*NUM_BUFFER - offset_rx  - OFFSET_RX_TX)/DATA_SIZE)*DATA_SIZE + offset_rx + OFFSET_RX_TX;
	CH1_start_idx_write_block = (CH1_start_idx_read_block_plus_NUM_BUFFER - 1 - DATA_SIZE) % (NUM_BUFFER*DATA_SIZE);

	if (ch2_addr < recv_addr_last)
		recv_addr_last -= NUM_BUFFER*DATA_SIZE;


	if ((ch2_addr - recv_addr_last) == DATA_SIZE) // new data received / transmitted
	{
		recv_addr_last = ch2_addr;

		my_esp_tx->CRC = CalcCrc((uint16_t*)my_esp_tx, sizeof(tEspRx)-1);

		// copy the response user data into the DMA memory fields to be sent
		uint16_t cp;
		for(cp = 0; cp < DATA_SIZE; cp++){
		    tx_buffer[(CH1_start_idx_write_block+cp) % (NUM_BUFFER*DATA_SIZE)] = *( (uint16_t *) my_esp_tx + cp);
		}

		// copy the setpoints / parameters from the DMA memory into the struct
		uint16_t rx;
		for(rx = 0; rx < DATA_SIZE; rx++){
		    *((uint16_t *) my_esp_rx + rx) =  rx_buffer[(CH2_start_idx_read_block+rx) % (NUM_BUFFER*DATA_SIZE)];
		}

		if (CalcCrc((uint16_t*)my_esp_rx, sizeof(tEspRx)-1) == my_esp_rx->CRC)
		{
			if (EspSuccessfullCountdown)
			{
				--EspSuccessfullCountdown;
				return CACTUS_NOT_OK;
			}
			else
			{
				return CACTUS_NEW_DATA_OK;
				// use new data
			}

		}
		else// if (esp_valid_idx == 0)
		{
			++offset_rx;
			if (offset_rx > DATA_SIZE)
				offset_rx = 0;

			EspSuccessfullCountdown = REQUIRED_SUCCESSFUL_ESP_TRANSACTIONS;
			return CACTUS_NOT_OK;
		}
	}
	if (EspSuccessfullCountdown)
		return CACTUS_NOT_OK;
	else
		return CACTUS_NO_RECEIVE;
} // end of GetNewSetpoints() function
