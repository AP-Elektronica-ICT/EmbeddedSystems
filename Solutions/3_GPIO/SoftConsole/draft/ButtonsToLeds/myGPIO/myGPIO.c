// Applications for the SmartFusion Evaluation board: lab 3 - GPIO
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

// Microsemi Libraries
#include "mss_gpio.h"

void MY_GPIO_init(void) {
	// Initialize MSS GPIOs.
	void MSS_GPIO_init(void);

	// Configure the MSS GPIO output pins
	MSS_GPIO_config(MSS_GPIO_0, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_1, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_2, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_3, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_4, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_5, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_6, MSS_GPIO_OUTPUT_MODE );
	MSS_GPIO_config(MSS_GPIO_7, MSS_GPIO_OUTPUT_MODE );

	// Configure the MSS GPIO input pins + configure interrupt mode (rising)
	MSS_GPIO_config(MSS_GPIO_8, MSS_GPIO_INPUT_MODE
			| MSS_GPIO_IRQ_EDGE_POSITIVE );
	MSS_GPIO_config(MSS_GPIO_9, MSS_GPIO_INPUT_MODE
			| MSS_GPIO_IRQ_EDGE_POSITIVE );

	// Enable the input pin interrupts in the MSS
    MSS_GPIO_enable_irq( MSS_GPIO_8 );
    MSS_GPIO_enable_irq( MSS_GPIO_9 );
}

void ledOn(uint8_t led) {
	MSS_GPIO_set_output(led, 0);
}

void ledOff(uint8_t led) {
	MSS_GPIO_set_output(led, 1);
}
