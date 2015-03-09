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
Hierdoor moet je de ACE flags bijgevolg ook niet instellen.
De flags worden in de voorbeeldtoepassing namelijk gebruikt om de LEDs aan te sturen.

**Opgelet:** op pagina 23, 24 staat dat je het bestand ``newlibs_stub.c`` moet toevoegen in de build configuratie.
Je mag deze stap overslaan.
In de laaste versie van Libero gebeurt dit automatisch.
Daarnaast is de uitleg ook niet volledig correct. (het bestand ``newlibs_stub.o`` zou moeten toegevoegd worden in die stap)

Lees de waarde van de potentiometer uit d.m.v. de ADC en geef deze informatie weer via de UART.

Wanneer je aan de potentiometer draait worden deze gegevens live aangepast.
 * Voorbeeld output: ``Spanning : 2,52 Volt``

## 2.2 .Uitlezen ADC 2 (Extra oefening)
Deze oefening mag je maken, maar ze is niet verplicht.
Enkele studenten hebben bij het fout aansluiten van de pinnen problemen met de hardware veroorzaakt. (stroompiek op USB poort)
De pin meteen naast ADC2 is immers de GND. 

Wanneer je per ongeluk:
 * de potentiometer volledig open gedraaid hebt (dus 5V op de de uitgang zet)
 * de connector in contact brengt met de pin naarst ADC (GND)
 * Dan zal er een grote stroom doorheen het SmartFusion bordje vloeien en bijgevolg een grote stroom over uw USB poort vloeien

Om eventuele verdere problemen te voorkomen is het beter om deze oefening niet te maken.

### Opgave
De ADC2 input van de microcontroller is via de PCB verbonden met de mixed-signal header. 
 * Verbind een externe/extra potentiometer met de ADC2 input. 
 * Neem de Vcc en GND voor de potentiometer ook via de mixed-signal header zodat je GND referentie zeker correct is.

Bestudeer het 
[smartfusion schema (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/4_Hardware/0_Actel_SmartFusion_a2f_eval_schematic.pdf)
om de juiste pinnen te vinden (de mixed signal connector staat op pagina 13).
 * Stel de ACE correct in om deze input ook in je software te kunnen gebruiken.
 * Lees de waarde van een externe potentiometer uit d.m.v. de ADC en geef deze informatie weer via de UART.

Wanneer je aan de potentiometer draait worden deze gegevens live aangepast.
 * Voorbeeld output: ``Spanning : 2,52 Volt``
