#ifndef ___SYSTIICK_CONFIGURATION___
#define ___SYSTIICK_CONFIGURATION___

#include "../inc/registers.h"


//The Processor run on 50MHz clock speed = Clock time is 20ns
	//Using PIOSC/4 ensure efficient timing regardless of the Main osc used.
	//SYSTICK input clock = PIOSC /4 = 4MHz
	//for 10 ms time period the STRELOAD register = (40000 -1)=39999 = 0x9C3F
	//for STCTRL register we'll use Enable and INTEN = 0x03
#define SYSTICK_CFG_RELOAD_VALUE            0x9C3F   
#define SYSTICK_CFG_ENABLE                  1
#define SYSTICK_CFG_INTERRUPT_ENABLE        1
#define SYSTICK_CFG_CLOCK_SOURCE            0

#define SYSTICK_CFG_STCRL_R                 (((SYSTICK_CFG_CLOCK_SOURCE & 0X01)<<2) | ((SYSTICK_CFG_INTERRUPT_ENABLE & 0x01)<<1) | (SYSTICK_CFG_ENABLE &0x01))

void systick_Init(void);

#endif
