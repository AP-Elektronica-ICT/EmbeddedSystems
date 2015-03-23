// Applications for the SmartFusion Evaluation board: lab 1 - UART
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

// Microsemi Libraries
#include "mss_uart.h"

// Other libraries
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Personal Libraries
#include "myUART.h"

// Define array lengths
#define RX_BUFF_SIZE 8
#define MESSAGE_SIZE 60
#define NUMBERARRAY_SIZE 4

char messageLettersUpper[MESSAGE_SIZE] =
        "\n\rDe letter was: #, de uppercase letter van # is #          ";

char messageLettersLower[MESSAGE_SIZE] =
        "\n\rDe letter was: #, de lowercase letter van # is #          ";

char messageNumbers[MESSAGE_SIZE] = "\n\rGetallenreeks:";
char numberArray[NUMBERARRAY_SIZE] = "   ";

uint8_t character;
//uint8_t numberArray[10] = "";

bool printed = true; // True means 'the previous text has been processes'

void MY_UART_init (uint32_t baud_rate)
{
    MSS_UART_init( &g_mss_uart0, baud_rate, MSS_UART_DATA_8_BITS
            | MSS_UART_NO_PARITY | MSS_UART_ONE_STOP_BIT
    );
    MSS_UART_set_rx_handler( &g_mss_uart0, uart0_rx_handler,
                            MSS_UART_FIFO_SINGLE_BYTE);
}

void printMyText ()
{
    unsigned char message[14] = "\n\rHello World!";
    MSS_UART_polled_tx( &g_mss_uart0, message, sizeof(message));
}

void printThisText (char * message, uint32_t length)
{
    MSS_UART_polled_tx( &g_mss_uart0, (unsigned char *) message, length);
}

bool isLetter (uint8_t character)
{
    if (character > 96 && character < 123)
    {
        return true;
    }
    else if (character > 64 && character < 91)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isNumber (uint8_t character)
{
    if (character > 47 && character < 58)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void processLetter (uint8_t letter)
{
    if (letter > 96 && letter < 123)
    {
        messageLettersLower[17] = letter;
        messageLettersLower[44] = letter;
        messageLettersLower[49] = letter - 32;
        printThisText(messageLettersLower, sizeof(messageLettersLower));
    }
    else if (letter > 64 && letter < 91)
    {
        messageLettersUpper[17] = letter;
        messageLettersUpper[44] = letter;
        messageLettersUpper[49] = letter + 32;
        printThisText(messageLettersUpper, sizeof(messageLettersUpper));
    }
}

void processNumber (uint8_t number)
{
    number = number - '0'; // convert to integer

    sprintf(numberArray, " %d, ", number);
    strncat(messageNumbers, numberArray, 4);

    int number_2 = number * number;
    int number_3 = number * number * number;

    sprintf(numberArray, "%d, ", number_2);
    strncat(messageNumbers, numberArray, 4);

    sprintf(numberArray, "%d", number_3);
    strncat(messageNumbers, numberArray, 4);

    printThisText(messageNumbers, sizeof(messageNumbers));
    // memset(messageNumbers, '\0', sizeof( messageNumbers ));
    strncpy(messageNumbers, "\n\rGetallenreeks:", MESSAGE_SIZE);
}

void processInput (void)
{
    if ( !printed)
    {
        if (isLetter(character))
        {
            processLetter(character);
            printed = true;
        }
        else if (isNumber(character))
        {
            processNumber(character);
            printed = true;
        }
    }
}

void uart0_rx_handler (mss_uart_instance_t * this_uart)
{
    uint8_t rx_buff[RX_BUFF_SIZE];
    //  uint32_t rx_idx  = 0;
    printed = false;
    size_t rx_size = MSS_UART_get_rx(this_uart, rx_buff, sizeof(rx_buff));
    if (rx_size == 1)
    {
        character = rx_buff[0];
    }
}
