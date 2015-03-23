// Applications for the SmartFusion Evaluation board: lab 1 - UART
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

// Microsemi Libraries
#include "mss_uart.h"

// Personal Libraries
#include "myUART.h"

unsigned char message1[28]="\n\rThis is the first message.";
unsigned char message2[29]="\n\rThis is the second message.";
unsigned char message3[28]="\n\rThis is the third message.";

int main()
{
	MY_UART_init(MSS_UART_57600_BAUD);

	while( 1 )
	{
		printMyText();
		printThisText(message1, sizeof(message1));
		printThisText(message1, sizeof(message1)-2);
		printThisText(message1, sizeof(message1)-4);
		printThisText(message2, sizeof(message2));
		printThisText(message3, sizeof(message3));
	}
}
