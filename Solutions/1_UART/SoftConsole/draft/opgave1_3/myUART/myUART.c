// Applications for the SmartFusion Evaluation board: lab 1 - UART
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

// Microsemi Libraries
#include "mss_uart.h"

void MY_UART_init (uint32_t baud_rate)
{
	MSS_UART_init
	(
			&g_mss_uart0,
			baud_rate,
			MSS_UART_DATA_8_BITS | MSS_UART_NO_PARITY | MSS_UART_ONE_STOP_BIT
	);
}
//
//void MY_UART_init(uint32_t baud_rate, mss_uart_irq_handler_t handler)
//{
//	MSS_UART_init
//	(
//			&g_mss_uart0,
//			baud_rate,
//			MSS_UART_DATA_8_BITS | MSS_UART_NO_PARITY | MSS_UART_ONE_STOP_BIT
//	);
//}

void printMyText()
{
	unsigned char message[14]="\n\rHello World!";
	MSS_UART_polled_tx( &g_mss_uart0, message, sizeof(message) );
}

void printThisText(const uint8_t * message, uint32_t length)
{
	MSS_UART_polled_tx( &g_mss_uart0, message, length);
}
