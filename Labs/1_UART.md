# UART 
Schrijf embedded software voor de Cortex M3 in het SmartFusion ontwikkelbord die via de UART met een PC communiceert.
 * Configureer de microcontroller en zijn IO
 * Schrijf en compileer een elementair C programma m.b.v. SoftConsole
 * Upload het programma naar het ontwikkelbord
 * Analyseer de correcte werking aan de hand van on-chip debugging.
 * Communiceer via de seriële poort met het ontwikkelbord

### Verslaggeving
Maak één gecomprimeerd .zip bestand dat alle gevraagde documenten bevat.

Voeg de nodige bewijsstukken toe:
 * De originele C broncode: (alle SoftConsole bestanden) (geef duidelijk aan welke files bij welke opgave behoren)
 * Verslag in pdf formaat met een bespreking van de werking van de zelf geschreven/toegevoegde code.

Geef dit document af via Blackboard. 
De inleverdeadline wordt vermeld op Blackboard.

## Inleiding
Download en installeer de Microsemi Libero SOC1 ontwikkelomgeving op je laptop.
De installatie bestanden zijn beschikbaar tijdens de les op USB stick (en voor of na de les in mijn bureau).

We maken gebruik van het "Microsemi SmartFusion Evaluation Kit" ontwikkelbord.

De handleidingen, tutorials en veel andere informatie voor dit ontwikkelbord zijn online
beschikbaar.
 * http://www.microsemi.com/products/fpga-soc/design-resources/dev-kits/smartfusion/smartfusion-evaluation-kit
 * http://www.actel.com/FPGA/SmartFusion (oude website)

### UART voorbeeldprogramma: "Hello World"
Installeer het voorbeeldprogramma beschreven in de "SmartFusion UART SW flow tutorial UG.pdf" op het ontwikkelbord.
Bestudeer en pas het programma aan zodat je de werking goed begrijpt.

Vanaf versie 11.5 van Libero SoC is de flow voor het starten van een nieuw project iets eenvoudiger geworden.
I.p.v. eerst Softconsole op te starten en daar Libero in te stellen als een "external tool" kan je nu in Libero de Wizard achter de knop "new project" volgen.
Hierdoor zijn de stappen beschreven in de eerste vijftal pagina's van de tutorial zo goed als overbodig geworden.

De benodigde info om de wizard correct te doorlopen staat echter wel in deze tutorial:
 * Family: SmartFusion
 * Type development kit: A2F200M3F
 * Package: 484 FBGA
 * Speed: STD
 * Voltage: 1.5
 * Operating conditions: STD

Van deze opgave verwacht ik niets in je verslag.

### Software Bibliotheek
Pas het voorbeeldprogramma aan door een eigen bibliotheek aan het project toe te voegen. (myLib.h en myLib.c)

Voeg de bibliotheek toe door rechts te klikken op het "app" project en selecteer "new -> header file" en nadien "new -> c source file". 

Include uw header file in de main.c file om uw eigen functies te kunnen aanroepen.
 * myLib.h bevat de functie prototypes en de definities van constanten.
 * myLib.c bevat de implementatie van de functie prototypes
 
Pas het programma aan dat een zelf gekozen tekst die wordt gedefinieerd binnen uw myLib bestanden vanuit de main functie wordt afgedrukt.
 * Maak een functie: “printMyText()”: die een stukje tekst afdrukt
 * Maak een functie: “printThisText(message, length)”: die de eerste length letters tekst waarnaar wordt verwezen met message afdrukt
 
Het is de bedoeling om in de volgende opgaven voor dit semester steeds verder te werken in bibliotheek bestanden.

Voorzie bovenaan de bibliotheek de nodige gegevens:
 * Naam en contractinformatie
 * Datum
 * Titel van de labo opgave
 * Korte omschrijving van de bibliotheek
 * Versie geschiedenis (indien van toepassing)
 
### UART read/write
Pas het voorbeeldprogramma aan zodat characters die door de gebruiker worden ingetypt in het "putty-venster" worden ingelezen door de microcontroller. 

Maak gebruik van de nodige functies (en voorbeeldcode) uit de UART bibliotheek om dit te implementeren met behulp van de correcte interrupt service routine.
Lees het bestand "MSS_uart.h" in de drivers folder om te zien welke functies er bestaan en hoe je deze kan gebruiken.
Voor elke functie staat hier steeds uitgelegd wat de return value is, wat de betekenis is van de parameters die je er aan kan doorgeven en een minimalistisch codevoorbeeld waar deze functie in gebruikt wordt.

Laat je programma als volgt reageren op de ontvangen data:

Als een letter, bijvoorbeeld "a", wordt doorgestuurd door de gebruiker wordt de volgende tekst afgedrukt:
 * De letter was:  a, de uppercase letter van a is A
 * De letter was:  A, de lowercase letter van A is a
 
Identiek verloop voor de andere letters van het alfabet.

Als een cijfer, bijvoorbeeld 3, wordt doorgestuurd wordt de volgende tekst afgedrukt:
 * Getallenreeks:  3, 9, 27, 81

Als het geen letter uit ons alfabet of een cijfer was stuur je de tekst "Error" terug.
