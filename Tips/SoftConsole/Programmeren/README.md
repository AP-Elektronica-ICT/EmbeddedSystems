# TIPS

## Opzoeken van informatie
Praktisch voorbeeld: "Hoe werkt de UART juist?"

Belangrijkste info: (bekijken voor je verder gaat)
 * Documentatie per hardware module: rechtklikken op de blok in de Libero MSS configurator
 * Elementair voorbeeldproject met een minimale hoeveelheid code: rechtklikken op de driver in het "configure firmaware" venster in Libero, dan "Generate sample project" ... "Softconsole" 

Meer in detail:
 1. Bekijk via de MSS configurator in Libero de help file. (pdf document)
 2. Zoek naar een tutorial op de Microsemi website (of in de Github repo)
 3. Bekijk de broncode die je kan genereren voor iedere component: (uart.h)
 4. Er staat een algemene uitleg met een korte omschrijving van de taak van de header (eerste 50-100 regels van de header file)
 5. Per functie vind je steeds deze info terug:
  * Signature van de functie (naam & parameters)
  * Omschrijving van de werking
  * Omschrijving van de parameters
  * Voorbeeldcode: een minimale "main functie" waar deze functie wordt gebruikt. (soms moet je zelf nog enkele variabelen op functie prototypes aanmaken)
  * De eigenlijke implementatie vind je terug in uart.c (deze code zou je in principe nooit moeten bekijken)
 6. Daar staan alle functies die je kan gebruiken
 7. Voor elke functie staat in detail beschreven welke parameters je er aan kan doorgeven.
 8. Voor elke functie staat er een minimalistisch stukje voorbeeldcode. (dat je meestal rechtstreeks kan plakken in je "main.c")

## Tilde "~" operator
Bit per bit inversie uitvoeren op een variabele.
http://stackoverflow.com/questions/3952122/what-does-operator-do

## Int omzetten in char array
Het omzetten van een int in een char array kan je doen d.m.v.:
 *  ``sprintf(str, "The value is = %f", variable); ``
 * Hierdoor zal de inhoud van de variabele op de locatie waar %f staat geplaatst worden.
Denk er aan om voldoende plaatsen te voorzien in je array. 
 
Meer info: http://www.tutorialspoint.com/c_standard_library/c_function_sprintf.htm

## Wat is de betekenis van het keyword 'volatile'

A1:  http://www.embedded.com/story/OEG20010615S0107
A2:  http://publications.gbdirect.co.uk/c_book/chapter8/const_and_volatile.html

## Online code testen
Via onderstaande website kan je online C code testen.
 * http://www.tutorialspoint.com/compile_c_online.php
 
Op de website staat een online:
 * eenvoudige code editor
 * compiler
 * terminal venster waar je de output van de programma kan zien
 
Je kan hier "standaard C" code testen.
 * controle van syntax
 * controle van output, casting, program flow,...
 
Wat gaat niet:
 * breakpoints plaatsen
 * specifieke ARM, SmartFusion code compileren (uart.h, ace.h, ...)

## Bitwise operators in C
In C kan je verschillende bitwise operaties uitvoeren op variabelen.

Door rechts te klikken op een variabele in het SoftConsole (tijdens debuggen) kan je via "Format" kiezen om de variabele binair, hexadecimaal of decimaal weer te geven.

Meer info:
 * http://en.wikipedia.org/wiki/Bitwise_operations_in_C
 * http://www.cprogramming.com/tutorial/bitwise_operators.html
 * http://nl.wikibooks.org/wiki/Programmeren_in_C/Datatypes
 
## Overzicht shortcuts
 * ctrl-b: build code
 * ctrl-s: save
 * ctrl-a: selecteer alle  code
 * ctrl-i: fix indentation (wordt enkel toegepast op geselecteerde tekst -> dus eerst ctrl-a ingeven)
 * ctrl-shift-f: fix coding style  
