// Applications for the SmartFusion Evaluation board: lab 1 - UART
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

// Microsemi Libraries
#include "mss_uart.h"

// Other libraries
#include <stdbool.h>

// Personal Libraries
#include "myUART.h"

// Define array lengths
#define RX_BUFF_SIZE 8
#define MESSAGE_SIZE 60

uint8_t message[MESSAGE_SIZE]="\n\rDe letter was: #, de uppercase letter van # is #          ";
uint8_t data;

bool printed = false;

void uart0_rx_handler( mss_uart_instance_t * this_uart )
{
	uint8_t rx_buff[RX_BUFF_SIZE];
	//	uint32_t rx_idx  = 0;
	printed = false;
	size_t rx_size = MSS_UART_get_rx( this_uart, rx_buff, sizeof(rx_buff) );
	if (rx_size == 1)
	{
		data = rx_buff[0];
	}
}

bool isLetter(uint8_t letter)
{
	if (letter > 96 && letter < 123)
	{
		return true;
	}
	else if (letter > 64 && letter < 91)
	{
		return true;
	}
	else{
		return false;
	}
}

uint8_t switchCase(uint8_t letter)
{
	uint8_t output;
	if (letter > 96 && letter < 123)
	{
		output = letter - 32;
	}
	else if (letter > 64 && letter < 91)
	{
		output = letter + 32;
	}
	return output;
}

int main()
{
	//	MY_UART_init(MSS_UART_57600_BAUD, uart1_rx_handler);
	MY_UART_init(MSS_UART_57600_BAUD);
	MSS_UART_set_rx_handler( &g_mss_uart0, uart0_rx_handler,
			MSS_UART_FIFO_SINGLE_BYTE );

	while( 1 )
	{
		if(!printed)
		{
			if(isLetter(data))
			{
				message[17]= data;
				message[44]= data;
				message[49]= switchCase(data);
				printThisText(message, sizeof(message));
				printed = true;
			}
		}
	}
}
