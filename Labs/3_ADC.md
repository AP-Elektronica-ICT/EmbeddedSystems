# 3. ADC -- Draft versie!

Configuur het hardware platform zodat je gebruik kan maken van de ADCs op het ontwikkelbord.
 * De ADC pinnen: verbindt de eigenlijke pinnen op de PCB met de pinnen van de microcontroller
 * Stel de nodige flags in op thresholdspanningen zodat je in software op deze flags kan reageren (interrupts)
 * Programmeer deze configuratie in je ontwikkelbord
 * Voeg de ADC driver toe aan je SoftConsole workspace
 * Schrijf code om de ADCs uit te lezen
 
Voeg de benodigde code voor dit labo aan je eigen bibliotheek toe. (myLib.h en myLib.c)

## 3.1. Uitlezen ADC

Installeer het voorbeeldprogramma beschreven in de "Displaying POT Values over UART - SoftConsole Standalone Flow Tutorial for SmartFusion cSoC.pdf" op het ontwikkelbord.
Bestudeer en pas het programma aan zodat je de werking goed begrijpt.


## Uitlezen ADC
Lees de waarde van de potentiometer uit d.m.v. de ADC en geef deze informatie weer via de UART.

Voorbeeld output: "Spanning : 2,52 Volt"

## Aansturen LEDs
Lees de spanning over de ingebouwde potentiometer uit en geef deze waarde visueel weer door het aantal aangeschakelde LEDs te verhogen wanneer de spanning toeneemt.
Hoe hoger de ingangspanning, hoe meer LEDs branden. (cfr. VU meter)


Meer info: 
 * http://TODO (via: http://www.microsemi.com/products/fpga-soc/soc-fpga/smartfusion#documents)
 * Tutorial: SmartFusion_SoftConsole_POTlevel_UART_tutorial_UG.pdf
