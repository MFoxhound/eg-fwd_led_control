#ifndef __gpio__mcal__
#define __gpio__mcal__

#include "../inc/registers.h"
#include "../inc/variables.h"

typedef uint8 PortNum;
typedef uint8 PinNum;
typedef uint8 pin_dir;

typedef enum
{
	GPIO_PORT_A = 0x01,
	GPIO_PORT_B = 0x02,
	GPIO_PORT_C = 0x03,
	GPIO_PORT_D = 0x04,
	GPIO_PORT_E = 0x05,
	GPIO_PORT_F = 0x06,
}GPIO_port;

typedef enum
{
	GPIO_PIN_OUT = 1,
	GPIO_PIN_IN = 0
}GPIO_pin_Dir;

typedef enum
{
	GPIO_PIN_OUT_TOGGLE = 3,
	GPIO_PIN_OUT_HIGH = 1,
	GPIO_PIN_OUT_LOW	= 0
}GPIO_pin_Out_State;


typedef struct
{
	PortNum port;
	PinNum  pin;
	pin_dir dir;
}GPIO_pin;

void gpio_Pin_Set( GPIO_pin *pin);
void gpio_Pin_Write(GPIO_pin *pin, uint8 state);

#endif
