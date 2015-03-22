// Microsemi Libraries
#include "mss_uart.h"

// Other libraries


// Personal Libraries
#include "myGPIO.h"

// Define array lengths


int main()
{
	MY_GPIO_init();
	while( 1 )
	{
		ledOn(0);
		ledOn(1);
		ledOn(2);
		ledOn(3);
		ledOn(4);
		ledOn(5);
		ledOn(6);
		ledOn(7);

		ledOff(0);
		ledOff(1);
		ledOff(2);
		ledOff(3);
		ledOff(4);
		ledOff(5);
		ledOff(6);
		ledOff(7);
	}
}
