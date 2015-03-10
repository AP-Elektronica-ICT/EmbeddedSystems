# 4. OLED

Configuur het hardware platform zodat je gebruik kan maken van het OLED display op het ontwikkelbord.
 * De GPIO pinnen: verbindt de eigenlijke pinnen op de PCB met de pinnen van de microcontroller
 * Programmeer deze configuratie in je ontwikkelbord
 * Voeg de GPIO driver toe aan je SoftConsole workspace
 * Schrijf code om de GPIO pinnen aan te sturen
 
Voeg de benodigde code voor dit labo aan je eigen bibliotheek toe. (myOLED.h en myOLED.c)

### Verslaggeving
Maak één gecomprimeerd .zip bestand dat alle gevraagde documenten bevat.

Voeg de nodige bewijsstukken toe:
 * De originele C broncode: (alle SoftConsole bestanden) (geef duidelijk aan welke files bij welke opgave behoren)
 * Verslag in pdf formaat met een bespreking van de werking van de zelf geschreven/toegevoegde code.

Geef dit document af via Blackboard. 
De inleverdeadline wordt vermeld op Blackboard.


### Aansturen OLED (voorbeeldprogramma)
Installeer het voorbeeldprogramma beschreven in de tutorial 
[SmartFusion_Interfacing_with_OLED_using_I2C_AN.pdf (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/0_Tutorials/OLED%20display/SmartFusion_Interfacing_with_OLED_using_I2C_AN.pdf) 
op het ontwikkelbord.

Meer info over de benodigde pinnen en eigenschappen van het OLED display kan je terugvinden op pagina 19 en 20 van de 
[SmartFusion Evaluation Kit - User's Guide (pdf)](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/4_Hardware/1_A2F_Eval_Kit_UserGuide.pdf).

In de bovenstaande tutorial wordt verwezen naar voorbeeldcode die je kan downloaden van de Microsemi website.
In het bestand op de website staat code en programming files voor verschillende versies en revisies van de SmartFusion hardware.

Om jullie wat te helpen staat in dit
[de voorbeeldcode voor onze revisie in dit .zip bestand](https://github.com/AP-Elektronica-ICT/EmbeddedSystems/raw/master/Documentation/0_Tutorials/OLED%20display/A2F_AC347_DF.zip) 

Dit bestand bevat:
 * een programming file (om de hardware juist in te stellen)
 * een volledig Libero project (zodat je de hardware kan aanpassen)
 * een SoftConsole voorbeeldproject (de binary van het voorbeeldprogramma staat ook in het .zip bestand) (dit kan je dus debuggen zonder zelf eerst te moeten builden)

De SmartFusion microcontroller is via de I2C poort met de OLED module verbonden.
Om informatie op het display weer te geven moet je dus de juiste data via deze bus versturen.

![Aansturen OLED display](/Labs/images/OLED.png?raw=true "Aansturen OLED display]")

Meer info over I2C: 
 * https://learn.sparkfun.com/tutorials/i2c
 * http://en.wikipedia.org/wiki/I%C2%B2C
 
## 4.1. OLED & UART
Pas het voorbeeldprogramma aan zodat characters die door de gebruiker worden ingetypt in het "putty-venster" worden ingelezen door de microcontroller. 

Maak gebruik van de nodige functies (en voorbeeldcode) uit de UART en OLED bibliotheken om dit te implementeren met behulp van de correcte interrupt service routine.

Laat je programma als volgt reageren op de ontvangen data:

Als een letter, bijvoorbeeld "a", wordt doorgestuurd door de gebruiker wordt de volgende tekst afgedrukt:
 * ``a --> A``
 * ``A --> a``

Identiek verloop voor de andere letters van het alfabet.

Als een cijfer, bijvoorbeeld 3, wordt doorgestuurd wordt de volgende tekst afgedrukt:
 * ``3, 9, 27, 81``

Als het geen letter uit ons alfabet noch een cijfer was stuur je de tekst ``Error`` terug.

**Tip:** deze opgave komt zo goed als volledig overeen met opgave "1.3. UART read/write". (hergebruik dus je code uit die opgave)

## 4.2. OLED & ADC
Lees de waarde van de potentiometer uit d.m.v. de ADC en geef deze informatie weer via de OLED.

Wanneer je aan de potentiometer draait worden deze gegevens live aangepast.
 * Voorbeeld output: ``2,52 V``

**Tip:** deze opgave komt zo goed als volledig overeen met opgave "2.1. Uitlezen ADC 0". (hergebruik dus je code uit die opgave)

## 4.3. Potentiometer & OLED
Lees de spanning over de ingebouwde potentiometer uit en geef deze waarde visueel weer door het aantal aangeschakelde pixel op de OLED te verhogen wanneer de spanning toeneemt.
Hoe hoger de ingangspanning, hoe meer pixels branden. (cfr. VU meter)

**Tip:** deze opgave komt zo goed als volledig overeen met opgave "3.3. Potentiometer & LEDs". (hergebruik dus je code uit die opgave)

## 4.4. Modus selectie
Maak gebruik van een drukknop om te wisselen tussen de drie voorgaande modi.

**Tip:** deze opgave komt zo goed als volledig overeen met opgave "3.4. GPIO Modus selectie". (hergebruik dus je code uit die opgave)
