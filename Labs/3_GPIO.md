# 3. GPIO

Configuur het hardware platform zodat je gebruik kan maken van de LEDs op het ontwikkelbord.
 * De GPIO pinnen: verbindt de eigenlijke pinnen op de PCB met de pinnen van de microcontroller
 * Programmeer deze configuratie in je ontwikkelbord
 * Voeg de GPIO driver toe aan je SoftConsole workspace
 * Schrijf code om de GPIO pinnen aan te sturen
 
Voeg de benodigde code voor dit labo aan je eigen bibliotheek toe. (myGPIO.h en myGPIO.c)

### Verslaggeving
Maak één gecomprimeerd .zip bestand dat alle gevraagde documenten bevat.

Voeg de nodige bewijsstukken toe:
 * De originele C broncode: (alle SoftConsole bestanden) (geef duidelijk aan welke files bij welke opgave behoren)
 * Verslag in pdf formaat met een bespreking van de werking van de zelf geschreven/toegevoegde code.

Geef dit document af via Blackboard. 
De inleverdeadline wordt vermeld op Blackboard.

### Configureren hardware
Bekijk het voorbeeldprogramma beschreven in de tutorial
[Displaying POT Level with LEDs Libero SoC and SoftConsole Flow Tutorial for a SmartFusion cSoC (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/0_Tutorials/POT%20levels%20on%20LED/SmartFusion_LiberoSoftConsole_POTlevel_tutorial_UG.pdf) 
op het ontwikkelbord. 
Op pagina 13 in dit document wordt beschreven hoe je de input en output pinnen kan instellen.

Zorg er voor dat de acht LEDs en twee pushbuttons kan aansturen/uitlezen.

Meer info over de benodigde pinnen en instellingen kan je terugvinden op pagina 17 en 18 van de 
[SmartFusion Evaluation Kit - User's Guide (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/4_Hardware/1_A2F_Eval_Kit_UserGuide.pdf).


## 3.1. LED Toggle - UART
Stuur een commando via de UART  om LEDs aan en uit gezet te zetten.
 * Iedere LED krijgt een identificatie van 0 tot 7.
 * Wanneer je een getal tussen 0 en 7 via de UART doorstuurt zal deze LED zijn waarde inverteren. (aan -> uit, uit -> aan)

## 3.2. Drukknop teller - UART/LED
Laat de LEDs een telsequentie weergeven die weergeeft hoeveel keer de drukknop reeds werd ingedrukt.
 * Aanvankelijk zijn alle LEDs uitgeschakeld
 * Bij iedere druk op een drukknop gaat het aantal met één omhoog
 * Geef dit aantal weer via de UART
 * Geef dit aantal weer d.m.v. de LEDs. (geef het aantal keer dat er gedrukt is weer als een 8-bit binair getal)
 
## 3.3. Potentiometer & LEDs
Lees de spanning over de ingebouwde potentiometer uit en geef deze waarde visueel weer door het aantal aangeschakelde LEDs te verhogen wanneer de spanning toeneemt.
Hoe hoger de ingangspanning, hoe meer LEDs branden. (cfr. VU meter)

## 3.4. GPIO Modus selectie
Maak gebruik van twee drukknoppen om te wisselen tussen de drie voorgaande modi.
 * met drukknop één schakel je tussen de drie modi
 * met drukknop twee kan je het aantal pulsen tellen (zie opdracht 3.2)
