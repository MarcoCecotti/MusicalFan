#include "SPImcBSP.h"


MCBSP_Handle MCBSP_init(void *pMemory,const size_t numBytes){

  MCBSP_Handle MCBSPhandle;

  if(numBytes < sizeof(MCBSP_Obj))
    {
      return((MCBSP_Handle)NULL);
    }

  // assign the handle
  MCBSPhandle = (MCBSP_Handle)pMemory;

  return(MCBSPhandle);
} // end of MCBSP_init() function

void McBSP_stop(MCBSP_Handle handle){
	MCBSP_resetReceiver(handle);
	MCBSP_resetTransmitter(handle);
} // end of McBSP_stop() function

void McBSP_run(MCBSP_Handle handle){
	MCBSP_resetReleaseReceiver(handle);
	MCBSP_resetReleaseTransmitter(handle);
} // end of McBSP_run() function

extern void MCBSP_resetTransmitter(MCBSP_Handle handle){
	handle->SPCR2 &= (~(1 << MCBSP_SPCR2_XRST_BIT));
} // end of MCBSP_resetTransmitter() function

extern void MCBSP_resetReleaseTransmitter(MCBSP_Handle handle){
	handle->SPCR2 |= (1 << MCBSP_SPCR2_XRST_BIT);
} // end of MCBSP_resetReleaseTransmitter() function

void MCBSP_resetReceiver(MCBSP_Handle handle){
	handle->SPCR1 &= (~(1 << MCBSP_SPCR1_RRST_BIT));
} // end of MCBSP_resetReceiver() function

void MCBSP_resetReleaseReceiver(MCBSP_Handle handle){
	handle->SPCR1 |= (1 << MCBSP_SPCR1_RRST_BIT);
} // end of MCBSP_resetReleaseReceiver() function

void MCBSP_resetSampleRateGenerator(MCBSP_Handle handle){
	handle->SPCR2 &= (~(1 << MCBSP_SPCR2_GRST_BIT));
} // end of MCBSP_resetSampleRateGenerator() function

void MCBSP_resetReleaseSampleRateGenerator(MCBSP_Handle handle){
	handle->SPCR2 |= (1 << MCBSP_SPCR2_GRST_BIT);
} // end of MCBSP_resetReleaseSampleRateGenerator() function

void MCBSP_resetFrameSynchronizationLogic(MCBSP_Handle handle){
	handle->SPCR2 &= (~(1 << MCBSP_SPCR2_FRST_BIT));
} // end of MCBSP_resetFrameSynchronizationLogic() function

void MCBSP_resetReleaseFrameSynchronizationLogic(MCBSP_Handle handle){
	handle->SPCR2 |= (1 << MCBSP_SPCR2_FRST_BIT);
} // end of MCBSP_resetReleaseFrameSynchronizationLogic() function

extern void MCBSP_setTransmitClockPolarity(MCBSP_Handle handle, uint16_t polarity){
	switch(polarity){
		case  MCBSP_TransmitClockPolarity_dataSampleRisingEdge :{
			handle->PCR &= (~(1 << MCBSP_PCR_CLKXP_BIT));
			break;
		}
		case MCBSP_TransmitClockPolarity_dataSampleFallingEdge :{
			handle->PCR |= (1 << MCBSP_PCR_CLKXP_BIT);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setTransmitClockPolarity() function

extern void MCBSP_setReceiveClockPolarity(MCBSP_Handle handle, uint16_t polarity){
	switch(polarity){
		case MCBSP_ReceiveClockPolarity_dataSampleRisingEdge :{
			handle->PCR |= (1 << MCBSP_PCR_CLKRP_BIT);
			break;
		}
		case MCBSP_ReceiveClockPolarity_dataSampleFallingEdge :{
			handle->PCR &= (~(1 << MCBSP_PCR_CLKRP_BIT));
			break;
		}
		default :{
			break;
		}
	}
} // end of MCBSP_setReceiveClockPolarity() function

extern void MCBSP_setTransmitClockMode(MCBSP_Handle handle, uint16_t txClkMode){
	switch(txClkMode){
		case MCBSP_TransmitClockMode_ExternalClkSPISlave :{
			handle->PCR &= (~(1 << MCBSP_PCR_CLKXM_BIT));
			break;
		}
		case MCBSP_TransmitClockMode_InternalClkSPIMaster :{
			handle->PCR |= (1 << MCBSP_PCR_CLKXM_BIT);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setTransmitClockMode() function

extern void MCBSP_setReceiveClockMode(MCBSP_Handle handle, uint16_t rcvClkMode){
	switch(rcvClkMode){
		case  MCBSP_ReceiveClockMode_ExternalClk :{
			handle->PCR &= (~(1 << MCBSP_PCR_CLKRM_BIT));
			break;
		}
		case MCBSP_ReceiveClockMode_InternalClk :{
			handle->PCR |= (1 << MCBSP_PCR_CLKRM_BIT);
			break;
		}
		default :{
			break;
		}
	}
} // end of MCBSP_setReceiveClockMode() function

void MCBSP_setClockStopMode(MCBSP_Handle handle, uint16_t clkStopMode){
	switch(clkStopMode){
		case MCBSP_ClockStopMode_DISABLED:{
			//1) clear bit
			handle->SPCR1 &= (~(0 << MCBSP_SPCR1_CLKSTP_BITS));
			//2) set bit
			handle->SPCR1 |= (0 << MCBSP_SPCR1_CLKSTP_BITS);
			break;
		}
		case MCBSP_ClockStopMode_WithoutClockDelay:{
			//1) clear bit
			handle->SPCR1 &= (~(2 << MCBSP_SPCR1_CLKSTP_BITS));
			//2) set bit
			handle->SPCR1 |= (2 << MCBSP_SPCR1_CLKSTP_BITS);
			break;
		}
		case MCBSP_ClockStopMode_HalfCycleClockDelay:{
			//1) clear bit
			handle->SPCR1 &= (~(3 << MCBSP_SPCR1_CLKSTP_BITS));
			//2) set bit
			handle->SPCR1 |= (3 << MCBSP_SPCR1_CLKSTP_BITS);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setClockStopMode() function

void MCBSP_setMode(MCBSP_Handle handle,
							uint16_t mode, 					// da stellt man SPI oder "nicht-SPI" ein
							uint16_t digitalLoopback){ 		// Loopback-Mode ein/aus
	switch(digitalLoopback){
		case McBSP_disableLoopback :{
			handle->SPCR1 &= (~(1 << MCBSP_SPCR1_DLB_BIT));
			break;
		}
		case McBSP_enableLoopback :{
			handle->SPCR1 |= (1u << MCBSP_SPCR1_DLB_BIT);
			break;
		}
		default:{
			break;
		}
	}

	switch(mode){
		case McBsp_SPISlaveMode0 : {
			MCBSP_setClockStopMode(handle, MCBSP_ClockStopMode_WithoutClockDelay);

			MCBSP_setTransmitClockPolarity(handle, MCBSP_TransmitClockPolarity_dataSampleRisingEdge);

			MCBSP_setReceiveClockPolarity(handle, MCBSP_ReceiveClockPolarity_dataSampleFallingEdge);

			MCBSP_setTransmitClockMode(handle, MCBSP_TransmitClockMode_ExternalClkSPISlave);

			MCBSP_setReceiveClockMode(handle, MCBSP_ReceiveClockMode_ExternalClk);
			break;
		}
		case McBsp_SPISlaveMode1 : {
			MCBSP_setClockStopMode(handle, MCBSP_ClockStopMode_HalfCycleClockDelay);

			MCBSP_setTransmitClockPolarity(handle, MCBSP_TransmitClockPolarity_dataSampleRisingEdge);

			MCBSP_setReceiveClockPolarity(handle, MCBSP_ReceiveClockPolarity_dataSampleRisingEdge);

			MCBSP_setTransmitClockMode(handle, MCBSP_TransmitClockMode_ExternalClkSPISlave);

			MCBSP_setReceiveClockMode(handle, MCBSP_ReceiveClockMode_ExternalClk);
			break;
		}
		case McBsp_SPISlaveMode2 : {
			MCBSP_setClockStopMode(handle, MCBSP_ClockStopMode_WithoutClockDelay);

			MCBSP_setTransmitClockPolarity(handle, MCBSP_TransmitClockPolarity_dataSampleFallingEdge);

			MCBSP_setReceiveClockPolarity(handle, MCBSP_ReceiveClockPolarity_dataSampleFallingEdge);

			MCBSP_setTransmitClockMode(handle, MCBSP_TransmitClockMode_ExternalClkSPISlave);

			MCBSP_setReceiveClockMode(handle, MCBSP_ReceiveClockMode_ExternalClk);
			break;
		}
		case McBsp_SPISlaveMode3 : {
			MCBSP_setClockStopMode(handle, MCBSP_ClockStopMode_HalfCycleClockDelay);

			MCBSP_setTransmitClockPolarity(handle, MCBSP_TransmitClockPolarity_dataSampleFallingEdge);

			MCBSP_setReceiveClockPolarity(handle, MCBSP_ReceiveClockPolarity_dataSampleRisingEdge);

			MCBSP_setTransmitClockMode(handle, MCBSP_TransmitClockMode_ExternalClkSPISlave);

			MCBSP_setReceiveClockMode(handle, MCBSP_ReceiveClockMode_ExternalClk);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setMode() function

void MCBSP_sampleRateGeneratorInputClockMode(MCBSP_Handle handle, uint16_t sampleRateGenSRC){
	switch(sampleRateGenSRC){
		case McBSP_SampleRateGen_Source_LSPCLK :{
			handle->PCR &= (~(1 << MCBSP_PCR_SCLKME_BIT));
			handle->SRGR2 |= (1 << MCBSP_SRGR2_CLKSM_BIT);
			break;
		}
		case McBSP_SampleRateGen_Source_MCLKR_Pin :{
			handle->PCR |= (1 << MCBSP_PCR_SCLKME_BIT);
			handle->SRGR2 &= (~(1 << MCBSP_SRGR2_CLKSM_BIT));
			break;
		}
		case McBSP_SampleRateGen_Source_MCLKX_Pin :{
			handle->PCR |= (1 << MCBSP_PCR_SCLKME_BIT);
			handle->SRGR2 |= (1 << MCBSP_SRGR2_CLKSM_BIT);
			break;
		}
		default :{
			break;
		}
	}
} // end of MCBSP_sampleRateGeneratorInputClockMode() function

void MCBSP_setTransmitFrameSynchronizationMode(MCBSP_Handle handle, uint16_t snycMode){
	switch(snycMode){
		case MCBSP_TransmitFrameSyncMode_EXTERNAL :{
			handle->PCR &= (~(1 << MCBSP_PCR_FSXM_BIT));
			break;
		}
		case MCBSP_TransmitFrameSyncMode_INTERNAL :{
			handle->PCR |= (1 << MCBSP_PCR_FSXM_BIT);
			break;
		}
		default: {
			break;
		}
	}

} // end of MCBSP_setTransmitFrameSynchronizationMode() function

void MCBSP_setReceiveFrameSynchronizationMode(MCBSP_Handle handle, uint16_t snycMode){
	switch(snycMode){
		case MCBSP_ReceiveFrameSyncMode_EXTERNAL :{
			handle->PCR &= (~(1 << MCBSP_PCR_FSRM_BIT));
			break;
		}
		case MCBSP_ReceiveFrameSyncMode_INTERNAL :{
			handle->PCR |= (1 << MCBSP_PCR_FSRM_BIT);
			break;
		}
		default: {
			break;
		}
	}

} // end of MCBSP_setReceiveFrameSynchronizationMode() function

void MCBSP_setTransmitFrameSyncPolarity(MCBSP_Handle handle, uint16_t transmitPol){
	switch(transmitPol){
		case MCBSP_TransmitFrameSync__ACTIVE_HIGH :{
			handle->PCR &= (~(1 << MCBSP_PCR_FSXP_BIT));
			break;
		}
		case MCBSP_TransmitFrameSync__ACTIVE_LOW :{
			handle->PCR |= (1 << MCBSP_PCR_FSXP_BIT);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setTransmitFrameSyncPolarity() function

void MCBSP_setReceiveFrameSyncPolarity(MCBSP_Handle handle, uint16_t receivePol){
	switch(receivePol){
		case MCBSP_ReceiveFrameSync__ACTIVE_HIGH:{
			handle->PCR &= (~(1 << MCBSP_PCR_FSRP_BIT));
			break;
		}
		case MCBSP_ReceiveFrameSync__ACTIVE_LOW:{
			handle->PCR |= (1 << MCBSP_PCR_FSRP_BIT);
			break;
		}
		default:{
			break;
		}
	}

} // end of MCBSP_setReceiveFrameSyncPolarity() function

void MCBSP_setSRGClockDivider(MCBSP_Handle handle, uint16_t divider){
	//1) clear bit
	handle->SRGR1 &= (~( (divider - 1) << MCBSP_SRGR1_CLKGDV_BITS));
	//2) set bit
	handle->SRGR1 |= ( (divider - 1) << MCBSP_SRGR1_CLKGDV_BITS);
} // end of MCBSP_setSRGClockDivider() function

void MCBSP_setTransmitDataDelay(MCBSP_Handle handle, uint16_t delay){
	switch(delay){
		case MCBSP_TransmitDataDelay_0Bit :{
			//1) clear bit
			handle->XCR2 &= (~( 0 << MCBSP_XCR2_XDATDLY_BITS));
			//2) set bit
			handle->XCR2 |= ( 0 << MCBSP_XCR2_XDATDLY_BITS);
			break;
		}
		case MCBSP_TransmitDataDelay_1Bit :{
			//1) clear bit
			handle->XCR2 &= (~( 0 << MCBSP_XCR2_XDATDLY_BITS));
			//2) set bit
			handle->XCR2 |= ( 0 << MCBSP_XCR2_XDATDLY_BITS);
			break;
		}
		case MCBSP_TransmitDataDelay_2Bit :{
			//1) clear bit
			handle->XCR2 &= (~( 0 << MCBSP_XCR2_XDATDLY_BITS));
			//2) set bit
			handle->XCR2 |= ( 0 << MCBSP_XCR2_XDATDLY_BITS);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setTransmitDataDelay() function

void MCBSP_setReceiveDataDelay(MCBSP_Handle handle, uint16_t delay){
	switch(delay){
		case MCBSP_ReceiveDataDelay_0Bit :{
			//1) clear bit
			handle->RCR2 &= (~( 0 << MCBSP_RCR2_RDATDLY_BITS));
			//2) set bit
			handle->RCR2 |= ( 0 << MCBSP_RCR2_RDATDLY_BITS);
			break;
		}
		case MCBSP_ReceiveDataDelay_1Bit :{
			//1) clear bit
			handle->RCR2 &= (~( 1 << MCBSP_RCR2_RDATDLY_BITS));
			//2) set bit
			handle->RCR2 |= ( 1 << MCBSP_RCR2_RDATDLY_BITS);
			break;
		}
		case MCBSP_ReceiveDataDelay_2Bit :{
			//1) clear bit
			handle->RCR2 &= (~( 2 << MCBSP_RCR2_RDATDLY_BITS));
			//2) set bit
			handle->RCR2 |= ( 2 << MCBSP_RCR2_RDATDLY_BITS);
			break;
		}
		default:{
			break;
		}
	}
} // end of MCBSP_setReceiveDataDelay() function

void MCBSP_setReceiveWordLength1(MCBSP_Handle handle, uint16_t length){
	switch(length){
		case MCBSP_ReceiveWordLength1_8Bits:{
			//1) clear bit
			handle->RCR1 &= (~( 0 << MCBSP_RCR1_RWDLEN1_BITS));
			//2) set bit
			handle->RCR1 |= ( 0 << MCBSP_RCR1_RWDLEN1_BITS);
			break;
		}
		case MCBSP_ReceiveWordLength1_12Bits:{
			//1) clear bit
			handle->RCR1 &= (~( 1 << MCBSP_RCR1_RWDLEN1_BITS));
			//2) set bit
			handle->RCR1 |= ( 1 << MCBSP_RCR1_RWDLEN1_BITS);
			break;
		}
		case MCBSP_ReceiveWordLength1_16Bits:{
			//1) clear bit
			handle->RCR1 &= (~( 2 << MCBSP_RCR1_RWDLEN1_BITS));
			//2) set bit
			handle->RCR1 |= ( 2 << MCBSP_RCR1_RWDLEN1_BITS);
			break;
		}
		case MCBSP_ReceiveWordLength1_20Bits:{
			//1) clear bit
			handle->RCR1 &= (~( 3 << MCBSP_RCR1_RWDLEN1_BITS));
			//2) set bit
			handle->RCR1 |= ( 3 << MCBSP_RCR1_RWDLEN1_BITS);
			break;
		}
		case MCBSP_ReceiveWordLength1_24Bits:{
			//1) clear bit
			handle->RCR1 &= (~( 4 << MCBSP_RCR1_RWDLEN1_BITS));
			//2) set bit
			handle->RCR1 |= ( 4 << MCBSP_RCR1_RWDLEN1_BITS);
			break;
		}
		case MCBSP_ReceiveWordLength1_32Bits:{
			//1) clear bit
			handle->RCR1 &= (~( 5 << MCBSP_RCR1_RWDLEN1_BITS));
			//2) set bit
			handle->RCR1 |= ( 5 << MCBSP_RCR1_RWDLEN1_BITS);
			break;
		}
		default: {
			break;
		}
	}
} // end of MCBSP_setReceiveWordLength1() function

void MCBSP_setTransmitWordLength1(MCBSP_Handle handle, uint16_t length){
	switch(length){
		case MCBSP_TransmitWordLength1_8Bits :{
			//1) clear bit
			handle->XCR1 &= (~( 0 << MCBSP_XCR1_XWDLEN1_BITS));
			//2) set bit
			handle->XCR1 |= ( 0 << MCBSP_XCR1_XWDLEN1_BITS);
			break;
		}
		case MCBSP_TransmitWordLength1_12Bits :{
			//1) clear bit
			handle->XCR1 &= (~( 1 << MCBSP_XCR1_XWDLEN1_BITS));
			//2) set bit
			handle->XCR1 |= ( 1 << MCBSP_XCR1_XWDLEN1_BITS);
			break;
		}
		case MCBSP_TransmitWordLength1_16Bits :{
			//1) clear bit
			handle->XCR1 &= (~( 2 << MCBSP_XCR1_XWDLEN1_BITS));
			//2) set bit
			handle->XCR1 |= ( 2 << MCBSP_XCR1_XWDLEN1_BITS);
			break;
		}
		case MCBSP_TransmitWordLength1_20Bits :{
			//1) clear bit
			handle->XCR1 &= (~( 3 << MCBSP_XCR1_XWDLEN1_BITS));
			//2) set bit
			handle->XCR1 |= ( 3 << MCBSP_XCR1_XWDLEN1_BITS);
			break;
		}
		case MCBSP_TransmitWordLength1_24Bits :{
			//1) clear bit
			handle->XCR1 &= (~( 4 << MCBSP_XCR1_XWDLEN1_BITS));
			//2) set bit
			handle->XCR1 |= ( 4 << MCBSP_XCR1_XWDLEN1_BITS);
			break;
		}
		case MCBSP_TransmitWordLength1_32Bits :{
			//1) clear bit
			handle->XCR1 &= (~( 5 << MCBSP_XCR1_XWDLEN1_BITS));
			//2) set bit
			handle->XCR1 |= ( 5 << MCBSP_XCR1_XWDLEN1_BITS);
			break;
		}
		default: {
			break;
		}
	}
} // end of MCBSP_setTransmitWordLength1() function

uint16_t MCBSP_getClockDiv(MCBSP_Handle handle){
	return ((handle->SRGR1 & 0x00FF) + 1);
} // end of MCBSP_getClockDiv() function

void MCBSP_InitDelayLoop(MCBSP_Handle handle, long systemFrequencyMHz){
	long CPU_SPD =  systemFrequencyMHz * 1000000;
	long MCBSP_SRG_FREQ = CPU_SPD / MCBSP_getClockDiv(handle);
	long MCBSP_INIT_DELAY = 2 * (CPU_SPD / MCBSP_SRG_FREQ); // # of CPU cycles in 2 SRG cycles-init delay

    long      i;
    for (i = 0; i < MCBSP_INIT_DELAY; i++) {} //delay in McBsp init. must be at least 2 SRG cycles
} // end of MCBSP_InitDelayLoop() function
