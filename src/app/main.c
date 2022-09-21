#include "..\inc\MY_TM4C123GH6PM.c"


GPIO_pin LED_RED;

//Global variable for systic timing control
unsigned int t_High=5, t_Low =50; //Time for LED ON and OFF in mutiplication of 10ms ie to achice 1 SEC the value =100

void set_LED_TIME(float t_on, float t_off)
{
	t_High = (t_on * 100);
	t_Low = (t_off * 100);
}


int main ( void )
{
	LED_RED.port = GPIO_PORT_F;
	LED_RED.pin = GPIO_pin_1;
	LED_RED.dir = GPIO_PIN_OUT;
	
  gpio_Pin_Set(&LED_RED);
	systick_Init();
	set_LED_TIME(0.03 , 0.5);
	while (1) 
		{	
			//ToDo: Some Processing.			
		}
}


uint32 state=0;
void SysTick_Handler()
{
	SYSTICK_CURRENT_VAL = 0x00;
	static unsigned int count = 0;
	if(count ==0)
	{
		switch (state)
		{
			case 0:
				count = t_High;
			  gpio_Pin_Write(&LED_RED,GPIO_PIN_OUT_HIGH);			
				state =1;
				break;
			case 1:
				count = t_Low;
		   	gpio_Pin_Write(&LED_RED,GPIO_PIN_OUT_LOW);
				state =0;
				break;
			default:
				state =0;
				break;
	  }
  }
	else
	{
		count--;
	}
	
	
}
