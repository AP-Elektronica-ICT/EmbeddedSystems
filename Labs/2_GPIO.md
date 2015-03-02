# 2. GPIO -- Draft versie!

Configuur het hardware platform zodat je gebruik kan maken van de LEDs op het ontwikkelbord.
 * De GPIO pinnen: verbindt de eigenlijke pinnen op de PCB met de pinnen van de microcontroller
 * Programmeer deze configuratie in je ontwikkelbord
 * Voeg de GPIO driver toe aan je SoftConsole workspace
 * Schrijf code om de GPIO pinnen aan te sturen
 
Voeg de benodigde code voor dit labo aan je eigen bibliotheek toe. (myLib.h en myLib.c)

### Verslaggeving
Maak één gecomprimeerd .zip bestand dat alle gevraagde documenten bevat.

Voeg de nodige bewijsstukken toe:
 * De originele C broncode: (alle SoftConsole bestanden) (geef duidelijk aan welke files bij welke opgave behoren)
 * Verslag in pdf formaat met een bespreking van de werking van de zelf geschreven/toegevoegde code.

Geef dit document af via Blackboard. 
De inleverdeadline wordt vermeld op Blackboard.


## 2.1. Uitlezen en uitlezen van GPIO's

Installeer het voorbeeldprogramma beschreven in de "SmartFusion UART SW flow tutorial UG.pdf" op het ontwikkelbord.
Bestudeer en pas het programma aan zodat je de werking goed begrijpt.

## 2.1.1. LED Toggle
Zorg er voor dat de acht LEDs via een commando via de UART aan en uit gezet kunnen worden.

Iedere LED krijgt een identificatie van 0 tot 7.
Wanneer je een getal tussen 0 en 7 via de UART doorstuurt zal deze LED zijn waarde inverteren. (aan -> uit, uit -> aan)

## 2.1.2. LED Counter
Druk pushbutton, reactie op LED



Meer info: 
 * http://TODO (via: http://www.microsemi.com/products/fpga-soc/soc-fpga/smartfusion#documents)
