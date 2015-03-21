// Applications for the SmartFusion Evaluation board: lab 1 - UART
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

// Microsemi Libraries
#include "mss_uart.h"

// Other libraries
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Personal Libraries
#include "myUART.h"

int main ()
{
    //	MY_UART_init(MSS_UART_57600_BAUD, uart1_rx_handler);
    MY_UART_init(MSS_UART_57600_BAUD);

    while (1)
    {
        processInput();
    }
}
