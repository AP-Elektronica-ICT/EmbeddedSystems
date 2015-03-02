# 2. ADC

Configuur het hardware platform zodat je gebruik kan maken van de ADCs op het ontwikkelbord.
 * De ADC pinnen: verbindt de eigenlijke pinnen op de PCB met de pinnen van de microcontroller
 * Stel de nodige flags in op thresholdspanningen zodat je in software op deze flags kan reageren (interrupts)
 * Programmeer deze configuratie in je ontwikkelbord
 * Voeg de ADC driver toe aan je SoftConsole workspace (zodat 
 * Schrijf code om de ADCs uit te lezen
 
Voeg de benodigde code voor dit labo aan je eigen bibliotheek toe. (myLib.h en myLib.c)

## 2.1. Uitlezen ADC 0
Installeer het voorbeeldprogramma beschreven in de tutorial 
[Displaying POT Values over UART - SoftConsole Standalone Flow Tutorial for SmartFusion cSoC.pdf (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/0_Tutorials/POT%20levels%20on%20UART/SmartFusion_SoftConsole_POTlevel_UART_tutorial_UG.pdf) 
op het ontwikkelbord.

Bestudeer en pas het programma eventueel een beetje aan zodat je de werking goed begrijpt.

In de tutorial worden de General-purpose input/output (GPIO) pinnen ook ingesteld zodat de vier leds mee aangaan wanneer je aan de potentiometer draait.
Je mag dit reeds instellen, maar in principe is dit een deel van opdracht 3.
 * Lees de waarde van de potentiometer uit d.m.v. de ADC en geef deze informatie weer via de UART.

Wanneer je aan de potentiometer draait worden deze gegevens live aangepast.
 * Voorbeeld output: ``Spanning : 2,52 Volt``

## 2.2. Uitlezen ADC 2
De ADC2 input van de microcontroller is via de PCB verbonden met de mixed-signal header. 
 * Verbindt een potentiometer met de ADC2 input. 
 * Neem Vcc en GND ook via de mixed-signal header zodat je GND referentie zeker correct is.

Bestudeer het 
[smartfusion schema (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/4_Hardware/0_Actel_SmartFusion_a2f_eval_schematic.pdf)
om de juiste pinnen te vinden.
 * Stel de ACE correct in om deze input ook in je software te kunnen gebruiken.
 * Lees de waarde van een externe potentiometer uit d.m.v. de ADC en geef deze informatie weer via de UART.

Wanneer je aan de potentiometer draait worden deze gegevens live aangepast.
 * Voorbeeld output: ``Spanning : 2,52 Volt``
