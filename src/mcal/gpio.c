#include "gpio.h"

void gpio_Pin_Set( GPIO_pin *pin_id)
{
	switch (pin_id->port)
	{
		case (GPIO_PORT_A):
			break;
		case (GPIO_PORT_B):
			break;
		case (GPIO_PORT_C):
			break;
		case (GPIO_PORT_D):
			break;
		case (GPIO_PORT_E):
			break;
		case (GPIO_PORT_F):
			RCC_GPIO |= RCC_GPIO_portF; // Enable clock for PORTF
			break;
	}
	if(pin_id->dir == GPIO_PIN_OUT) 
	{
		GPIO_PORT_F_DEN |= pin_id->pin;
		GPIO_PORT_F_DIR |= pin_id->pin;
	}
	else  GPIO_PORT_F_DEN &= ~pin_id->pin;
}

void gpio_Pin_Write(GPIO_pin *pin_id, uint8 state)
{
	switch (pin_id->port)
	{
		case (GPIO_PORT_A):
			break;
		case (GPIO_PORT_B):
			break;
		case (GPIO_PORT_C):
			break;
		case (GPIO_PORT_D):
			break;
		case (GPIO_PORT_E):
			break;
		case (GPIO_PORT_F):
		  if(state == GPIO_PIN_OUT_HIGH)
				GPIO_PORT_F_DATA |= pin_id->pin;
			else if (state == GPIO_PIN_OUT_LOW)
				GPIO_PORT_F_DATA &= ~pin_id->pin;
			else
				GPIO_PORT_F_DATA ^= pin_id->pin;
			break;
	}
}
