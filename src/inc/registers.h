#ifndef __TM4C123GH6PM__
#define __TM4C123GH6PM__
#include "../inc/variables.h"




//Run Clock gating Control "RCC" General Purpose Input/Output page:339
#define RCC_GPIO           (*(( reg_address)0x400FE608))
typedef enum{
	RCC_GPIO_portA = 0x01,
	RCC_GPIO_portB = 0x02,
	RCC_GPIO_portC = 0x04,
	RCC_GPIO_portD = 0x08,
	RCC_GPIO_portE = 0x10,
	RCC_GPIO_portF = 0x20,
}RCC_GPIO_ports;

//Run Clock gating Control "RCC" General Purpose Timers page#337
#define RCC_TIMER         (*(( reg_address)0x400FE604))
typedef enum{
	RCC_GP_TMR_disable =0x00,
	RCC_GP_TMR_0 =0x01,
	RCC_GP_TMR_1 =0x02,
	RCC_GP_TMR_2 =0x04,
	RCC_GP_TMR_3 =0x08,
	RCC_GP_TMR_4 =0x10,
	RCC_GP_TMR_5 =0x20,
}RCC_GP_TMR;

////System Tick Regiters
#define SYSTICK_CTRL_STATUS      (*(( reg_address)0xE000E010)) //Page #137 in Datasheet
#define SYSTICK_LOAD_VAL         (*(( reg_address)0xE000E014)) //Page #139 in Datasheet
#define SYSTICK_CURRENT_VAL      (*(( reg_address)0xE000E018)) //Page #140 in Datasheet

//GPIO PORT F Registers

//using only pin_f1, pin_f2, pin_f3 then the bit mask address = GPIO_PORT_F_DATA address + 0x38 = 0x40025000 + 0x38
#define GPIO_PORT_F_DATA         (*(( reg_address)0x40025038)) //Page #660 in Datasheet 

#define GPIO_PORT_F_DATA_AHB     (*(( reg_address)0x4005D038)) //Page #660 in Datasheet
#define GPIO_PORT_F_DIR          (*(( reg_address)0x40025400)) //Page #661 in Datasheet
#define GPIO_POERT_F_DIR_AHB     (*(( reg_address)0x4005D400)) //Page #661 in Datasheet
#define GPIO_PORT_F_DEN          (*(( reg_address)0x4002551C)) //Page #680 in Datasheet
#define GPIO_POERT_F_DEN_AHB     (*(( reg_address)0x4005D51C)) //Page #680 in Datasheet

typedef enum{
	GPIO_pin_0 = 0x01,
	GPIO_pin_1 = 0x02,
	GPIO_pin_2 = 0x04,
	GPIO_pin_3 = 0x08,
	GPIO_pin_4 = 0x10,
	GPIO_pin_5 = 0x20,
	GPIO_pin_6 = 0x40,
	GPIO_pin_7 = 0x80,
}GPIO_pin_number;

//Timer 1 Registers  Base:0x40031000
#define GP_TMR1_CFG              (*(( reg_address)0x40031000)) //Page #725 in Datasheet
#define GP_TMR1A_MODE            (*(( reg_address)0x40031004)) //Page #727 in Datasheet
#define GP_TMR1B_MODE            (*(( reg_address)0x40031008)) //Page #731 in Datasheet
#define GP_TMR1_CTL              (*(( reg_address)0x4003100C)) //Page #735 in Datasheet

#define GP_TMR1_INTERRUPT_MASK   (*(( reg_address)0x40031018)) //Page #743 in Datasheet

#define GP_TMR1_INTERRUPT_CTRL   (*(( reg_address)0x40031024)) //Page #752 in Datasheet
#define GP_TMR1A_INTERVAL_LOAD   (*(( reg_address)0x40031028)) //Page #754 in Datasheet
#define GP_TMR1B_INTERVAL_LOAD   (*(( reg_address)0x4003102C)) //Page #755 in Datasheet

#define GP_TMR1A_PRESCALE        (*(( reg_address)0x40031038)) //Page #758 in Datasheet
//16/32-bit Timer 1: 0x4003.1000
/* 0x018 GPTMIMR R/W 0x0000.0000 GPTM Interrupt Mask 743

Offset Name Type Reset Description Seepage
//0x000 GPTMCFG R/W 0x0000.0000 GPTM Configuration 725
//0x004 GPTMTAMR R/W 0x0000.0000 GPTM Timer A Mode 727
//0x008 GPTMTBMR R/W 0x0000.0000 GPTM Timer B Mode 731
//0x00C GPTMCTL R/W 0x0000.0000 GPTM Control 
0x010 GPTMSYNC R/W 0x0000.0000 GPTM Synchronize 739
//0x018 GPTMIMR R/W 0x0000.0000 GPTM Interrupt Mask 743
0x01C GPTMRIS RO 0x0000.0000 GPTM Raw Interrupt Status 746
0x020 GPTMMIS RO 0x0000.0000 GPTM Masked Interrupt Status 749
//0x024 GPTMICR W1C 0x0000.0000 GPTM Interrupt Clear 752
//0x028 GPTMTAILR R/W 0xFFFF.FFFF GPTM Timer A Interval Load 754
//0x02C GPTMTBILR R/W - GPTM Timer B Interval Load 755
0x030 GPTMTAMATCHR R/W 0xFFFF.FFFF GPTM Timer A Match 756
0x034 GPTMTBMATCHR R/W - GPTM Timer B Match 757
//0x038 GPTMTAPR R/W 0x0000.0000 GPTM Timer A Prescale 758
0x03C GPTMTBPR R/W 0x0000.0000 GPTM Timer B Prescale 759
0x040 GPTMTAPMR R/W 0x0000.0000 GPTM TimerA Prescale Match 760
0x044 GPTMTBPMR R/W 0x0000.0000 GPTM TimerB Prescale Match 761
0x048 GPTMTAR RO 0xFFFF.FFFF GPTM Timer A 762
0x04C GPTMTBR RO - GPTM Timer B 763
0x050 GPTMTAV RW 0xFFFF.FFFF GPTM Timer A Value 764
0x054 GPTMTBV RW - GPTM Timer B Value 765
0x058 GPTMRTCPD RO 0x0000.7FFF GPTM RTC Predivide 766
0x05C GPTMTAPS RO 0x0000.0000 GPTM Timer A Prescale Snapshot 767
0x060 GPTMTBPS RO 0x0000.0000 GPTM Timer B Prescale Snapshot 768
0x064 GPTMTAPV RO 0x0000.0000 GPTM Timer A Prescale Value 769
0x068 GPTMTBPV RO 0x0000.0000 GPTM Timer B Prescale Value 770
0xFC0 GPTMPP RO 0x0000.0000 GPTM Peripheral Properties 771
*/
#endif

