// Applications for the SmartFusion Evaluation board: lab 1 - UART
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

#ifndef MYLIB_H_
#define MYLIB_H_

void uart0_rx_handler (mss_uart_instance_t * this_uart);

void MY_UART_init (uint32_t baud_rate);
//void MY_UART_init(uint32_t baud_rate, mss_uart_irq_handler_t handler);

void printMyText ();
void printThisText (char * message, uint32_t length);

bool isLetter (uint8_t character);
bool isNumber (uint8_t character);

void processLetter (uint8_t letter);
void processNumber (uint8_t number);

void processInput (void);

#endif /* MYLIB_H_ */
