# Examenvragen maart 2015

## 1. Hardware
### 1.1 Input devices
 * Potentiometer (ADC)
 * Pushbuttons
 * UART
 
### 1.2 Output devices
 * 8 LEDs
 * UART

## 2. Vragen
### 2.1 Pong
Simuleer het spel 'Pong' met behulp van twee pushbuttons en de acht LEDs.
 * Begin: enkel LED 0 is aan, alle andere uit
 * PB1 wordt ingedrukt
 * LED 0 gaat uit, LED 1 aan
 * LED 1 gaat uit, LED 2 aan
 * ...
 * LED 8 is aan, wanneer PB2 op dat ogenblik ingedrukt is gaat de LED weer "de andere richting uit"

### 2.2 Chronometer
Gebruik de pushbottons om een chronometer te ontwikkelen.
 * Start/stop button
 * Reset button
 * Output op de UART
 * Laat een LED branden wanneer er op Start gedrukt is, LED weer uit wanneer je op stop druk ("running state")

### 2.3 Rekenmachine
Beantwoord bepaalde commando's via de UART.
 * 5+3 -> antwoord 8
 * 5+6 -> antwoord 11
 * 2*3 -> antwoord 6
 * 5*8 -> antwoord 40

### 2.4 LED control
Controleer de LEDs via commando's op de UART
 * LEDON1: LED 1 aan
 * LEDOFF1: LED 1 uit
 * LEDTOGGLE1: LED 1 toggle
 * LEDBLINK1: LED 1 begint te knipperen
 * SETFRENQ1: pas de knipperfrequentie van LED 1 aan

### 2.5 Reactietijdmeter
 * Laat na een tijd "x" een LED branden
 * De gebruiker druk zo snel mogelijk op een knop
 * Meet de tijd tussen inschakelen van LED en indrukken van knop.
 * Geef deze tijd weer op UART/OLE

## 3. Evaluatie
De volgende aspecten zullen geëvalueerd worden:
 * hardware configuratie: kan het het ontwikkelbord correct instellen (juist I/O enabled,...) (Libero/FlashPro)
 * compilatie software: kan je de software compileren (gebruik van juiste bibliotheken, linker scripts, ...)
 * sofware upload: oploaden van de software naar je ontwikkelbord
 * on-chip debugging: plaatsen van breakpoints, tonen en aanpassen van variabelen in het RAM geheugen
 * werking van de toepassing: heb je de opgave geïmplementeerd zoals gevraagd
 * beantwoorden vragen

Documenten:
 * design, code,... afgeven via Blackboard
 * notities op papier tijdens het examen zelf ook afgeven
 * alle bovenstaande aspecten tijdens het mondeling examen toelichten



