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
//#define GPIO_PORT_F_DATA         (*(( reg_address)0x400253FC)) //Page #660 in Datasheet
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


#endif

