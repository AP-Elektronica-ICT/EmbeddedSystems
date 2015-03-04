# TIPS i.v.m. de installatie

## Laatste versie installeren
Installeer de laatste versie van Libero SoC.

Op dit ogenblik (maart 2015) is dat Libero SoC 11.5.

## Alle tools installeren
Vergeet niet om tijdens de installatie de volgende tools ook mee te installeren (aanvinken)
 * SoftConsole
 * Synplify Pro

## Installeer de COM port driver 
(Windows only, op Linux/OSX is deze ingebouwd)
Installeer de CP2102 Virtual com port driver van Silicon Labs.
 * http://www.silabs.com/products/mcu/pages/usbtouartbridgevcpdrivers.aspx

## Licentie: LM_LICENSE_FILE
Volg de stappen voor het installeren van licentie file nauwkeurig. 
Het is belangrijk dat de "LM_LICENSE_FILE" environmental variable juist is ingesteld zodat deze naar het PATH waar het bestand license.dat staat.
(plaats dit bestand dus niet in een "temp" of "downloads" folder op je PC waar de kans bestaat dat je het bestand verwijdert)

Indien niet correct is ingesteld zullen één of meerdere van de tools in Libero SoC niet opstarten. (typisch is het "Synplify Pro" dat als eerste problemen geeft)

## Besturingssysteem:
De driver voor de Flashpro debugger (die in de ProASIC FPGA zit) bestaat voorlopig enkel voor Windows XP en Windows 7)
 * dus het instellen/configureren van de core gaat enkel daarmee
 * er is geen officiële ondersteuning voor Linux of Windows 8

Het is wel mogelijk om de driver te installeren op Windows 8 door de PC te herstarten in "recovery modus" en dan manueel de unsigned driver te installeren.
 * http://www.makeuseof.com/tag/how-can-i-install-hardware-with-unsigned-drivers-in-windows-8/

