// Microsemi Libraries
#include "mss_uart.h"
#include "mss_gpio.h"

// Other libraries
#include <stdbool.h>

// Personal Libraries
#include "myGPIO.h"

// Initialize LED states
volatile bool ledState0 = false;
volatile bool ledState1 = false;
volatile bool ledState2 = false;
volatile bool ledState3 = false;

#define on true
#define off false

__attribute__((__interrupt__)) void GPIO8_IRQHandler( void )
{
	if(ledState0 == off)
	{
		ledOn(0);
		ledState0 = on;
	}
	else if(ledState0 == on)
	{
		ledOff(0);
		ledState0 = off;
	}

    /*
     * Clear interrupt both at the GPIO and Cortex-M3 interrupt controller levels.
     */
    MSS_GPIO_clear_irq( MSS_GPIO_8 );
}

__attribute__((__interrupt__)) void GPIO9_IRQHandler( void )
{
	if(ledState1 == off)
	{
		ledOn(1);
		ledState1 = on;
	}
	else if(ledState1 == on)
	{
		ledOff(1);
		ledState1 = off;
	}

    /*
     * Clear interrupt both at the GPIO and Cortex-M3 interrupt controller levels.
     */
    MSS_GPIO_clear_irq( MSS_GPIO_9 );
}

int main()
{
	MY_GPIO_init();
	while( 1 )
	{

	}
}
