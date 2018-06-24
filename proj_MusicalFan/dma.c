#include "dma.h"

DMA_Handle DMA_init(void *pMemory,const size_t numBytes){

  DMA_Handle DMAhandle;

  if(numBytes < sizeof(DMA_Obj))
    {
      return((DMA_Handle)NULL);
    }

  // assign the handle
  DMAhandle = (DMA_Handle)pMemory;

  return(DMAhandle);
} // end of DMA_init() function

void DMA_run(DMA_Handle DMAhandle, uint16_t DMAChannel){
	switch(DMAChannel){
		case DMA_CH1 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH1.CONTROL |= (1 << DMA_CONTROL_RUN_BIT);
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH2.CONTROL |= (1 << DMA_CONTROL_RUN_BIT);
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH3.CONTROL |= (1 << DMA_CONTROL_RUN_BIT);
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH4.CONTROL |= (1 << DMA_CONTROL_RUN_BIT);
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH5.CONTROL |= (1 << DMA_CONTROL_RUN_BIT);
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH6.CONTROL |= (1 << DMA_CONTROL_RUN_BIT);
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}// end of DMA_run() function

void DMA_stop(DMA_Handle DMAhandle, uint16_t DMAChannel){
	switch(DMAChannel){
		case DMA_CH1 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH1.CONTROL &= (~(1 << DMA_CONTROL_RUN_BIT));
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH2.CONTROL &= (~(1 << DMA_CONTROL_RUN_BIT));
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH3.CONTROL &= (~(1 << DMA_CONTROL_RUN_BIT));
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH4.CONTROL &= (~(1 << DMA_CONTROL_RUN_BIT));
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH5.CONTROL &= (~(1 << DMA_CONTROL_RUN_BIT));
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
				ENABLE_PROTECTED_REGISTER_WRITE_MODE;
				DMAhandle->CH6.CONTROL &= (~(1 << DMA_CONTROL_RUN_BIT));
				DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}// end of DMA_stop() function

void DMA_hardReset(DMA_Handle DMAhandle){
	ENABLE_PROTECTED_REGISTER_WRITE_MODE;
	DMAhandle->DMACTRL |= (1 << DMA_DMACTRL_HARDRESET_BIT);
	__asm (" nop"); // one NOP required after HARDRESET
	DISABLE_PROTECTED_REGISTER_WRITE_MODE;
}// end of DMA_hardReset() function

void DMA_priorityReset(DMA_Handle DMAhandle){
	ENABLE_PROTECTED_REGISTER_WRITE_MODE;
	DMAhandle->DMACTRL |= (1 << DMA_DMACTRL_PRIORITYRESET_BIT);
	DISABLE_PROTECTED_REGISTER_WRITE_MODE;
}// end of DMA_priorityReset() function

void DMA_enableFREE(DMA_Handle DMAhandle){
	ENABLE_PROTECTED_REGISTER_WRITE_MODE;
	DMAhandle->DEBUGCTRL |= (1u << DMA_DEBUGCTRL_FREE_BIT);
	DISABLE_PROTECTED_REGISTER_WRITE_MODE;
}//end of DMA_enableFREE() function

void DMA_disableFREE(DMA_Handle DMAhandle){
	ENABLE_PROTECTED_REGISTER_WRITE_MODE;
	DMAhandle->DEBUGCTRL &= (~(1 << DMA_DEBUGCTRL_FREE_BIT));
	DISABLE_PROTECTED_REGISTER_WRITE_MODE;
}//end of DMA_disableFREE() function

void DMA_CH1normalMode(DMA_Handle DMAhandle){
	ENABLE_PROTECTED_REGISTER_WRITE_MODE;
	DMAhandle->PRIORITYCTRL1 &= (~(1 << DMA_PRIORITYCTRL1_CH1PRIORITY_BIT));
	DISABLE_PROTECTED_REGISTER_WRITE_MODE;
}//end of DMA_CH1normalMode() function

void DMA_CH1highPriorityMode(DMA_Handle DMAhandle){
	ENABLE_PROTECTED_REGISTER_WRITE_MODE;
	DMAhandle->PRIORITYCTRL1 |= (1 << DMA_PRIORITYCTRL1_CH1PRIORITY_BIT);
	DISABLE_PROTECTED_REGISTER_WRITE_MODE;
}//end of DMA_CH1highPriorityMode() function

void DMA_AddrConfig(DMA_Handle DMAhandle, uint16_t DMAChannel,
					volatile uint16_t *DMA_Dest,volatile uint16_t *DMA_Source){
	switch(DMAChannel){
		case DMA_CH1 : {
		    ENABLE_PROTECTED_REGISTER_WRITE_MODE;
		    // Set up SOURCE address:
		    DMAhandle->CH1.SRC_BEG_ADDR_SHADOW = (uint32_t)DMA_Source;	// Point to beginning of source buffer
		    DMAhandle->CH1.SRC_ADDR_SHADOW =     (uint32_t)DMA_Source;

		    // Set up DESTINATION address:
		    DMAhandle->CH1.DST_BEG_ADDR_SHADOW = (uint32_t)DMA_Dest;	// Point to beginning of destination buffer
		    DMAhandle->CH1.DST_ADDR_SHADOW =     (uint32_t)DMA_Dest;
		    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
		    ENABLE_PROTECTED_REGISTER_WRITE_MODE;
		    // Set up SOURCE address:
		    DMAhandle->CH2.SRC_BEG_ADDR_SHADOW = (uint32_t)DMA_Source;	// Point to beginning of source buffer
		    DMAhandle->CH2.SRC_ADDR_SHADOW =     (uint32_t)DMA_Source;

		    // Set up DESTINATION address:
		    DMAhandle->CH2.DST_BEG_ADDR_SHADOW = (uint32_t)DMA_Dest;	// Point to beginning of destination buffer
		    DMAhandle->CH2.DST_ADDR_SHADOW =     (uint32_t)DMA_Dest;
		    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
		    ENABLE_PROTECTED_REGISTER_WRITE_MODE;
		    // Set up SOURCE address:
		    DMAhandle->CH3.SRC_BEG_ADDR_SHADOW = (uint32_t)DMA_Source;	// Point to beginning of source buffer
		    DMAhandle->CH3.SRC_ADDR_SHADOW =     (uint32_t)DMA_Source;

		    // Set up DESTINATION address:
		    DMAhandle->CH3.DST_BEG_ADDR_SHADOW = (uint32_t)DMA_Dest;	// Point to beginning of destination buffer
		    DMAhandle->CH3.DST_ADDR_SHADOW =     (uint32_t)DMA_Dest;
		    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
		    ENABLE_PROTECTED_REGISTER_WRITE_MODE;
		    // Set up SOURCE address:
		    DMAhandle->CH4.SRC_BEG_ADDR_SHADOW = (uint32_t)DMA_Source;	// Point to beginning of source buffer
		    DMAhandle->CH4.SRC_ADDR_SHADOW =     (uint32_t)DMA_Source;

		    // Set up DESTINATION address:
		    DMAhandle->CH4.DST_BEG_ADDR_SHADOW = (uint32_t)DMA_Dest;	// Point to beginning of destination buffer
		    DMAhandle->CH4.DST_ADDR_SHADOW =     (uint32_t)DMA_Dest;
		    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
		    ENABLE_PROTECTED_REGISTER_WRITE_MODE;
		    // Set up SOURCE address:
		    DMAhandle->CH5.SRC_BEG_ADDR_SHADOW = (uint32_t)DMA_Source;	// Point to beginning of source buffer
		    DMAhandle->CH5.SRC_ADDR_SHADOW =     (uint32_t)DMA_Source;

		    // Set up DESTINATION address:
		    DMAhandle->CH5.DST_BEG_ADDR_SHADOW = (uint32_t)DMA_Dest;	// Point to beginning of destination buffer
		    DMAhandle->CH5.DST_ADDR_SHADOW =     (uint32_t)DMA_Dest;
		    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
		    ENABLE_PROTECTED_REGISTER_WRITE_MODE;
		    // Set up SOURCE address:
		    DMAhandle->CH6.SRC_BEG_ADDR_SHADOW = (uint32_t)DMA_Source;	// Point to beginning of source buffer
		    DMAhandle->CH6.SRC_ADDR_SHADOW =     (uint32_t)DMA_Source;

		    // Set up DESTINATION address:
		    DMAhandle->CH6.DST_BEG_ADDR_SHADOW = (uint32_t)DMA_Dest;	// Point to beginning of destination buffer
		    DMAhandle->CH6.DST_ADDR_SHADOW =     (uint32_t)DMA_Dest;
		    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_AddrConfig() function

void DMA_BurstConfig(DMA_Handle DMAhandle, uint16_t DMAChannel,
						uint16_t bsize, int16_t srcbstep, int16_t desbstep){

	switch(DMAChannel){
		case DMA_CH1 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up BURST registers:
			DMAhandle->CH1.BURST_SIZE 		= bsize;			// Number of words(X-1) x-ferred in a burst
			DMAhandle->CH1.SRC_BURST_STEP 	= srcbstep;			// Increment source addr between each word x-ferred
			DMAhandle->CH1.DST_BURST_STEP 	= desbstep;			// Increment dest addr between each word x-ferred
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up BURST registers:
			DMAhandle->CH2.BURST_SIZE	 	= bsize;			// Number of words(X-1) x-ferred in a burst
			DMAhandle->CH2.SRC_BURST_STEP 	= srcbstep;			// Increment source addr between each word x-ferred
			DMAhandle->CH2.DST_BURST_STEP 	= desbstep;			// Increment dest addr between each word x-ferred
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up BURST registers:
			DMAhandle->CH3.BURST_SIZE 		= bsize;			// Number of words(X-1) x-ferred in a burst
			DMAhandle->CH3.SRC_BURST_STEP 	= srcbstep;			// Increment source addr between each word x-ferred
			DMAhandle->CH3.DST_BURST_STEP 	= desbstep;			// Increment dest addr between each word x-ferred
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up BURST registers:
			DMAhandle->CH4.BURST_SIZE 		= bsize;			// Number of words(X-1) x-ferred in a burst
			DMAhandle->CH4.SRC_BURST_STEP 	= srcbstep;			// Increment source addr between each word x-ferred
			DMAhandle->CH4.DST_BURST_STEP 	= desbstep;			// Increment dest addr between each word x-ferred
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up BURST registers:
			DMAhandle->CH5.BURST_SIZE 		= bsize;			// Number of words(X-1) x-ferred in a burst
			DMAhandle->CH5.SRC_BURST_STEP 	= srcbstep;			// Increment source addr between each word x-ferred
			DMAhandle->CH5.DST_BURST_STEP 	= desbstep;			// Increment dest addr between each word x-ferred
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up BURST registers:
			DMAhandle->CH6.BURST_SIZE 		= bsize;			// Number of words(X-1) x-ferred in a burst
			DMAhandle->CH6.SRC_BURST_STEP 	= srcbstep;			// Increment source addr between each word x-ferred
			DMAhandle->CH6.DST_BURST_STEP 	= desbstep;			// Increment dest addr between each word x-ferred
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_BurstConfig() function

void DMA_TransferConfig(DMA_Handle DMAhandle, uint16_t DMAChannel,
							uint16_t tsize, int16_t srctstep, int16_t deststep){

	switch(DMAChannel){
		case DMA_CH1 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up TRANSFER registers:
			DMAhandle->CH1.TRANSFER_SIZE 		= tsize;	// Number of bursts per transfer, DMA interrupt will occur after completed transfer
			DMAhandle->CH1.SRC_TRANSFER_STEP 	= srctstep;	// TRANSFER_STEP is ignored when WRAP occurs
			DMAhandle->CH1.DST_TRANSFER_STEP 	= deststep;	// TRANSFER_STEP is ignored when WRAP occurs
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up TRANSFER registers:
			DMAhandle->CH2.TRANSFER_SIZE 		= tsize;	// Number of bursts per transfer, DMA interrupt will occur after completed transfer
			DMAhandle->CH2.SRC_TRANSFER_STEP 	= srctstep;	// TRANSFER_STEP is ignored when WRAP occurs
			DMAhandle->CH2.DST_TRANSFER_STEP 	= deststep;	// TRANSFER_STEP is ignored when WRAP occurs
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up TRANSFER registers:
			DMAhandle->CH3.TRANSFER_SIZE 		= tsize;	// Number of bursts per transfer, DMA interrupt will occur after completed transfer
			DMAhandle->CH3.SRC_TRANSFER_STEP 	= srctstep;	// TRANSFER_STEP is ignored when WRAP occurs
			DMAhandle->CH3.DST_TRANSFER_STEP 	= deststep;	// TRANSFER_STEP is ignored when WRAP occurs
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up TRANSFER registers:
			DMAhandle->CH4.TRANSFER_SIZE 		= tsize;	// Number of bursts per transfer, DMA interrupt will occur after completed transfer
			DMAhandle->CH4.SRC_TRANSFER_STEP 	= srctstep;	// TRANSFER_STEP is ignored when WRAP occurs
			DMAhandle->CH4.DST_TRANSFER_STEP 	= deststep;	// TRANSFER_STEP is ignored when WRAP occurs
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up TRANSFER registers:
			DMAhandle->CH5.TRANSFER_SIZE 		= tsize;	// Number of bursts per transfer, DMA interrupt will occur after completed transfer
			DMAhandle->CH5.SRC_TRANSFER_STEP 	= srctstep;	// TRANSFER_STEP is ignored when WRAP occurs
			DMAhandle->CH5.DST_TRANSFER_STEP 	= deststep;	// TRANSFER_STEP is ignored when WRAP occurs
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up TRANSFER registers:
			DMAhandle->CH6.TRANSFER_SIZE 		= tsize;	// Number of bursts per transfer, DMA interrupt will occur after completed transfer
			DMAhandle->CH6.SRC_TRANSFER_STEP 	= srctstep;	// TRANSFER_STEP is ignored when WRAP occurs
			DMAhandle->CH6.DST_TRANSFER_STEP 	= deststep;	// TRANSFER_STEP is ignored when WRAP occurs
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_TransferConfig() function

void DMA_WrapConfig(DMA_Handle DMAhandle, uint16_t DMAChannel,
						uint16_t srcwsize, int16_t srcwstep, uint16_t deswsize, int16_t deswstep){

	switch(DMAChannel){
		case DMA_CH1 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up WRAP registers:
			DMAhandle->CH1.SRC_WRAP_SIZE = srcwsize;		// Wrap source address after N bursts
			DMAhandle->CH1.SRC_WRAP_STEP = srcwstep;		// Step for source wrap

			DMAhandle->CH1.DST_WRAP_SIZE = deswsize;		// Wrap destination address after N bursts
			DMAhandle->CH1.DST_WRAP_STEP = deswstep;		// Step for destination wrap
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up WRAP registers:
			DMAhandle->CH2.SRC_WRAP_SIZE = srcwsize;		// Wrap source address after N bursts
			DMAhandle->CH2.SRC_WRAP_STEP = srcwstep;		// Step for source wrap

			DMAhandle->CH2.DST_WRAP_SIZE = deswsize;		// Wrap destination address after N bursts
			DMAhandle->CH2.DST_WRAP_STEP = deswstep;		// Step for destination wrap
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up WRAP registers:
			DMAhandle->CH3.SRC_WRAP_SIZE = srcwsize;		// Wrap source address after N bursts
			DMAhandle->CH3.SRC_WRAP_STEP = srcwstep;		// Step for source wrap

			DMAhandle->CH3.DST_WRAP_SIZE = deswsize;		// Wrap destination address after N bursts
			DMAhandle->CH3.DST_WRAP_STEP = deswstep;		// Step for destination wrap
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up WRAP registers:
			DMAhandle->CH4.SRC_WRAP_SIZE = srcwsize;		// Wrap source address after N bursts
			DMAhandle->CH4.SRC_WRAP_STEP = srcwstep;		// Step for source wrap

			DMAhandle->CH4.DST_WRAP_SIZE = deswsize;		// Wrap destination address after N bursts
			DMAhandle->CH4.DST_WRAP_STEP = deswstep;		// Step for destination wrap
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up WRAP registers:
			DMAhandle->CH5.SRC_WRAP_SIZE = srcwsize;		// Wrap source address after N bursts
			DMAhandle->CH5.SRC_WRAP_STEP = srcwstep;		// Step for source wrap

			DMAhandle->CH5.DST_WRAP_SIZE = deswsize;		// Wrap destination address after N bursts
			DMAhandle->CH5.DST_WRAP_STEP = deswstep;		// Step for destination wrap
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up WRAP registers:
			DMAhandle->CH6.SRC_WRAP_SIZE = srcwsize;		// Wrap source address after N bursts
			DMAhandle->CH6.SRC_WRAP_STEP = srcwstep;		// Step for source wrap

			DMAhandle->CH6.DST_WRAP_SIZE = deswsize;		// Wrap destination address after N bursts
			DMAhandle->CH6.DST_WRAP_STEP = deswstep;		// Step for destination wrap
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_WrapConfig() function

void DMA_ModeConfig(DMA_Handle DMAhandle, PIE_Handle PIEhandle, uint16_t DMAChannel,
						uint16_t persel, uint16_t perinte, uint16_t oneshot, uint16_t cont,
						uint16_t synce, uint16_t syncsel, uint16_t ovrinte,
						uint16_t datasize, uint16_t chintmode, uint16_t chinte){

	switch(DMAChannel){
		case DMA_CH1 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up MODE Register:

			// Passed DMA channel as peripheral interrupt source
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(persel << DMA_MODE_PERINTSEL_BITS));
			//2) set bit
			DMAhandle->CH1.MODE |= (persel << DMA_MODE_PERINTSEL_BITS);

			// Peripheral interrupt enable
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(perinte << DMA_MODE_PERINTE_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (perinte << DMA_MODE_PERINTE_BIT);

			// Oneshot enable
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(oneshot << DMA_MODE_ONESHOT_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (oneshot << DMA_MODE_ONESHOT_BIT);

			// Continous enable
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(cont << DMA_MODE_CONTINUOUS_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (cont << DMA_MODE_CONTINUOUS_BIT);

			// Enable/disable the overflow interrupt
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(ovrinte << DMA_MODE_OVRINTE_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (ovrinte << DMA_MODE_OVRINTE_BIT);

			// 16-bit/32-bit data size transfers
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(datasize << DMA_MODE_DATASIZE_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (datasize << DMA_MODE_DATASIZE_BIT);

			// Generate interrupt to CPU at beginning/end of transfer
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(chintmode << DMA_MODE_CHINTMODE_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (chintmode << DMA_MODE_CHINTMODE_BIT);

			// Channel Interrupt to CPU enable
			//1) clear bit
			DMAhandle->CH1.MODE &= (~(chinte << DMA_MODE_CHINTE_BIT));
			//2) set bit
			DMAhandle->CH1.MODE |= (chinte << DMA_MODE_CHINTE_BIT);

			// Clear any spurious flags:
			// Clear any spurious interrupt flags
			// set bit
			DMAhandle->CH1.CONTROL |= (1 << DMA_CONTROL_PERINTCLR_BIT);

			// Clear any spurious sync error flags
			// set bit
			DMAhandle->CH1.CONTROL |= (1 << DMA_CONTROL_ERRCLR_BIT);

			// Initialize PIE vector for CPU interrupt:
			PIE_enableInt(PIEhandle, PIE_GroupNumber_7, PIE_InterruptSource_DMA_CH1);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up MODE Register:

			// Passed DMA channel as peripheral interrupt source
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(persel << DMA_MODE_PERINTSEL_BITS));
			//2) set bit
			DMAhandle->CH2.MODE |= (persel << DMA_MODE_PERINTSEL_BITS);

			// Peripheral interrupt enable
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(perinte << DMA_MODE_PERINTE_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (perinte << DMA_MODE_PERINTE_BIT);

			// Oneshot enable
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(oneshot << DMA_MODE_ONESHOT_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (oneshot << DMA_MODE_ONESHOT_BIT);

			// Continous enable
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(cont << DMA_MODE_CONTINUOUS_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (cont << DMA_MODE_CONTINUOUS_BIT);

			// Enable/disable the overflow interrupt
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(ovrinte << DMA_MODE_OVRINTE_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (ovrinte << DMA_MODE_OVRINTE_BIT);

			// 16-bit/32-bit data size transfers
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(datasize << DMA_MODE_DATASIZE_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (datasize << DMA_MODE_DATASIZE_BIT);

			// Generate interrupt to CPU at beginning/end of transfer
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(chintmode << DMA_MODE_CHINTMODE_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (chintmode << DMA_MODE_CHINTMODE_BIT);

			// Channel Interrupt to CPU enable
			//1) clear bit
			DMAhandle->CH2.MODE &= (~(chinte << DMA_MODE_CHINTE_BIT));
			//2) set bit
			DMAhandle->CH2.MODE |= (chinte << DMA_MODE_CHINTE_BIT);

			// Clear any spurious flags:
			// Clear any spurious interrupt flags
			// set bit
			DMAhandle->CH2.CONTROL |= (1 << DMA_CONTROL_PERINTCLR_BIT);

			// Clear any spurious sync error flags
			// set bit
			DMAhandle->CH2.CONTROL |= (1 << DMA_CONTROL_ERRCLR_BIT);

			// Initialize PIE vector for CPU interrupt:
			PIE_enableInt(PIEhandle, PIE_GroupNumber_7, PIE_InterruptSource_DMA_CH2);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up MODE Register:

			// Passed DMA channel as peripheral interrupt source
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(persel << DMA_MODE_PERINTSEL_BITS));
			//2) set bit
			DMAhandle->CH3.MODE |= (persel << DMA_MODE_PERINTSEL_BITS);

			// Peripheral interrupt enable
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(perinte << DMA_MODE_PERINTE_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (perinte << DMA_MODE_PERINTE_BIT);

			// Oneshot enable
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(oneshot << DMA_MODE_ONESHOT_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (oneshot << DMA_MODE_ONESHOT_BIT);

			// Continous enable
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(cont << DMA_MODE_CONTINUOUS_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (cont << DMA_MODE_CONTINUOUS_BIT);

			// Enable/disable the overflow interrupt
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(ovrinte << DMA_MODE_OVRINTE_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (ovrinte << DMA_MODE_OVRINTE_BIT);

			// 16-bit/32-bit data size transfers
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(datasize << DMA_MODE_DATASIZE_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (datasize << DMA_MODE_DATASIZE_BIT);

			// Generate interrupt to CPU at beginning/end of transfer
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(chintmode << DMA_MODE_CHINTMODE_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (chintmode << DMA_MODE_CHINTMODE_BIT);

			// Channel Interrupt to CPU enable
			//1) clear bit
			DMAhandle->CH3.MODE &= (~(chinte << DMA_MODE_CHINTE_BIT));
			//2) set bit
			DMAhandle->CH3.MODE |= (chinte << DMA_MODE_CHINTE_BIT);

			// Clear any spurious flags:
			// Clear any spurious interrupt flags
			// set bit
			DMAhandle->CH3.CONTROL |= (1 << DMA_CONTROL_PERINTCLR_BIT);

			// Clear any spurious sync error flags
			// set bit
			DMAhandle->CH3.CONTROL |= (1 << DMA_CONTROL_ERRCLR_BIT);

			// Initialize PIE vector for CPU interrupt:
			PIE_enableInt(PIEhandle, PIE_GroupNumber_7, PIE_InterruptSource_DMA_CH3);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up MODE Register:

			// Passed DMA channel as peripheral interrupt source
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(persel << DMA_MODE_PERINTSEL_BITS));
			//2) set bit
			DMAhandle->CH4.MODE |= (persel << DMA_MODE_PERINTSEL_BITS);

			// Peripheral interrupt enable
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(perinte << DMA_MODE_PERINTE_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (perinte << DMA_MODE_PERINTE_BIT);

			// Oneshot enable
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(oneshot << DMA_MODE_ONESHOT_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (oneshot << DMA_MODE_ONESHOT_BIT);

			// Continous enable
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(cont << DMA_MODE_CONTINUOUS_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (cont << DMA_MODE_CONTINUOUS_BIT);

			// Enable/disable the overflow interrupt
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(ovrinte << DMA_MODE_OVRINTE_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (ovrinte << DMA_MODE_OVRINTE_BIT);

			// 16-bit/32-bit data size transfers
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(datasize << DMA_MODE_DATASIZE_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (datasize << DMA_MODE_DATASIZE_BIT);

			// Generate interrupt to CPU at beginning/end of transfer
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(chintmode << DMA_MODE_CHINTMODE_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (chintmode << DMA_MODE_CHINTMODE_BIT);

			// Channel Interrupt to CPU enable
			//1) clear bit
			DMAhandle->CH4.MODE &= (~(chinte << DMA_MODE_CHINTE_BIT));
			//2) set bit
			DMAhandle->CH4.MODE |= (chinte << DMA_MODE_CHINTE_BIT);

			// Clear any spurious flags:
			// Clear any spurious interrupt flags
			// set bit
			DMAhandle->CH4.CONTROL |= (1 << DMA_CONTROL_PERINTCLR_BIT);

			// Clear any spurious sync error flags
			// set bit
			DMAhandle->CH4.CONTROL |= (1 << DMA_CONTROL_ERRCLR_BIT);

			// Initialize PIE vector for CPU interrupt:
			PIE_enableInt(PIEhandle, PIE_GroupNumber_7, PIE_InterruptSource_DMA_CH4);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up MODE Register:

			// Passed DMA channel as peripheral interrupt source
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(persel << DMA_MODE_PERINTSEL_BITS));
			//2) set bit
			DMAhandle->CH5.MODE |= (persel << DMA_MODE_PERINTSEL_BITS);

			// Peripheral interrupt enable
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(perinte << DMA_MODE_PERINTE_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (perinte << DMA_MODE_PERINTE_BIT);

			// Oneshot enable
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(oneshot << DMA_MODE_ONESHOT_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (oneshot << DMA_MODE_ONESHOT_BIT);

			// Continous enable
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(cont << DMA_MODE_CONTINUOUS_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (cont << DMA_MODE_CONTINUOUS_BIT);

			// Enable/disable the overflow interrupt
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(ovrinte << DMA_MODE_OVRINTE_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (ovrinte << DMA_MODE_OVRINTE_BIT);

			// 16-bit/32-bit data size transfers
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(datasize << DMA_MODE_DATASIZE_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (datasize << DMA_MODE_DATASIZE_BIT);

			// Generate interrupt to CPU at beginning/end of transfer
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(chintmode << DMA_MODE_CHINTMODE_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (chintmode << DMA_MODE_CHINTMODE_BIT);

			// Channel Interrupt to CPU enable
			//1) clear bit
			DMAhandle->CH5.MODE &= (~(chinte << DMA_MODE_CHINTE_BIT));
			//2) set bit
			DMAhandle->CH5.MODE |= (chinte << DMA_MODE_CHINTE_BIT);

			// Clear any spurious flags:
			// Clear any spurious interrupt flags
			// set bit
			DMAhandle->CH5.CONTROL |= (1 << DMA_CONTROL_PERINTCLR_BIT);

			// Clear any spurious sync error flags
			// set bit
			DMAhandle->CH5.CONTROL |= (1 << DMA_CONTROL_ERRCLR_BIT);

			// Initialize PIE vector for CPU interrupt:
			PIE_enableInt(PIEhandle, PIE_GroupNumber_7, PIE_InterruptSource_DMA_CH5);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			// Set up MODE Register:

			// Passed DMA channel as peripheral interrupt source
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(persel << DMA_MODE_PERINTSEL_BITS));
			//2) set bit
			DMAhandle->CH6.MODE |= (persel << DMA_MODE_PERINTSEL_BITS);

			// Peripheral interrupt enable
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(perinte << DMA_MODE_PERINTE_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (perinte << DMA_MODE_PERINTE_BIT);

			// Oneshot enable
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(oneshot << DMA_MODE_ONESHOT_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (oneshot << DMA_MODE_ONESHOT_BIT);

			// Continous enable
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(cont << DMA_MODE_CONTINUOUS_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (cont << DMA_MODE_CONTINUOUS_BIT);

			// Enable/disable the overflow interrupt
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(ovrinte << DMA_MODE_OVRINTE_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (ovrinte << DMA_MODE_OVRINTE_BIT);

			// 16-bit/32-bit data size transfers
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(datasize << DMA_MODE_DATASIZE_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (datasize << DMA_MODE_DATASIZE_BIT);

			// Generate interrupt to CPU at beginning/end of transfer
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(chintmode << DMA_MODE_CHINTMODE_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (chintmode << DMA_MODE_CHINTMODE_BIT);

			// Channel Interrupt to CPU enable
			//1) clear bit
			DMAhandle->CH6.MODE &= (~(chinte << DMA_MODE_CHINTE_BIT));
			//2) set bit
			DMAhandle->CH6.MODE |= (chinte << DMA_MODE_CHINTE_BIT);

			// Clear any spurious flags:
			// Clear any spurious interrupt flags
			// set bit
			DMAhandle->CH6.CONTROL |= (1 << DMA_CONTROL_PERINTCLR_BIT);

			// Clear any spurious sync error flags
			// set bit
			DMAhandle->CH6.CONTROL |= (1 << DMA_CONTROL_ERRCLR_BIT);

			// Initialize PIE vector for CPU interrupt:
			PIE_enableInt(PIEhandle, PIE_GroupNumber_7, PIE_InterruptSource_DMA_CH6);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_ModeConfig() function

void DMA_enableChannelInterrupt(DMA_Handle DMAhandle, uint16_t DMAChannel){
	switch(DMAChannel){
		case DMA_CH1 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH1.MODE |= (1u << DMA_MODE_CHINTE_BIT);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH2.MODE |= (1u << DMA_MODE_CHINTE_BIT);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH3.MODE |= (1u << DMA_MODE_CHINTE_BIT);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH4.MODE |= (1u << DMA_MODE_CHINTE_BIT);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH5.MODE |= (1u << DMA_MODE_CHINTE_BIT);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH6.MODE |= (1u << DMA_MODE_CHINTE_BIT);
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_enableChannelInterrupt() function

void DMA_disableChannelInterrupt(DMA_Handle DMAhandle, uint16_t DMAChannel){
	switch(DMAChannel){
		case DMA_CH1 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH1.MODE &= (~(1 << DMA_MODE_CHINTE_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH2.MODE &= (~(1 << DMA_MODE_CHINTE_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH3.MODE &= (~(1 << DMA_MODE_CHINTE_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH4.MODE &= (~(1 << DMA_MODE_CHINTE_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH5.MODE &= (~(1 << DMA_MODE_CHINTE_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 : {
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH6.MODE &= (~(1 << DMA_MODE_CHINTE_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_disableChannelInterrupt() function

void DMA_SoftReset(DMA_Handle DMAhandle, uint16_t DMAChannel){
	uint32_t i = 0;

	switch(DMAChannel){
		case DMA_CH1 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH1.CONTROL |= (1 << DMA_CONTROL_SOFTRESET_BIT);
			for(i = 0; i<100000; i++){}
			DMAhandle->CH1.CONTROL &= (~(1 << DMA_CONTROL_SOFTRESET_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH2 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH2.CONTROL |= (1 << DMA_CONTROL_SOFTRESET_BIT);
			for(i = 0; i<100000; i++){}
			DMAhandle->CH2.CONTROL &= (~(1 << DMA_CONTROL_SOFTRESET_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH3 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH3.CONTROL |= (1 << DMA_CONTROL_SOFTRESET_BIT);
			for(i = 0; i<100000; i++){}
			DMAhandle->CH3.CONTROL &= (~(1 << DMA_CONTROL_SOFTRESET_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH4 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH4.CONTROL |= (1 << DMA_CONTROL_SOFTRESET_BIT);
			for(i = 0; i<100000; i++){}
			DMAhandle->CH4.CONTROL &= (~(1 << DMA_CONTROL_SOFTRESET_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH5 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH5.CONTROL |= (1 << DMA_CONTROL_SOFTRESET_BIT);
			for(i = 0; i<100000; i++){}
			DMAhandle->CH5.CONTROL &= (~(1 << DMA_CONTROL_SOFTRESET_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
		case DMA_CH6 :{
			ENABLE_PROTECTED_REGISTER_WRITE_MODE;
			DMAhandle->CH6.CONTROL |= (1 << DMA_CONTROL_SOFTRESET_BIT);
			for(i = 0; i<100000; i++){}
			DMAhandle->CH6.CONTROL &= (~(1 << DMA_CONTROL_SOFTRESET_BIT));
			DISABLE_PROTECTED_REGISTER_WRITE_MODE;
			break;
		}
	}
}//end of DMA_SoftReset() function

__interrupt void local_D_INTCH1_ISR(void)		// DMA Ch1
{
   	ENABLE_PROTECTED_REGISTER_WRITE_MODE;									// NEED TO EXECUTE ENABLE_PROTECTED_REGISTER_WRITE_MODE INSIDE ISR !!!
    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
	return;
}

__interrupt void local_D_INTCH2_ISR(void)		// DMA Ch2
{
    ENABLE_PROTECTED_REGISTER_WRITE_MODE;									// NEED TO EXECUTE ENABLE_PROTECTED_REGISTER_WRITE_MODE INSIDE ISR !!!
	 DISABLE_PROTECTED_REGISTER_WRITE_MODE;
	 return;
}
