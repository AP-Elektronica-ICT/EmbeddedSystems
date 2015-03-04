# TIPS i.v.m. Libero

## Update Libero SoC
Controleer of je zeker de laatste versie gebruikt.
 * http://www.microsemi.com/products/fpga-soc/design-resources/design-software/libero-soc

## Update hardware catalog
De hardware catalog bevat de schema's van extra componenten die je in je FPGA kan programmeren: gates, processsoren, geheugens,...
 * Klik op view -> catolog (om de firmware catalog te openen) (normaal een tab aan de linkerkant van je scherm)
 * Klik op download (om alle update van componenten/blokken/cores te downloaden
 * Deze download kan de eerste keer enkele minuten duren (mogelijk/waarschijnlijk is je programma tijdens deze wachttijd niet meer responsief)
 
## Update van firmware
De firmware is de C code die door de microcontroller uitgevoerd zal worden.
Vooraleer je vanuit Libero een software workspace waarin alle benodigde instellingen en drivers zijn inbegrepen kan genereren moeten daarvoor enkele bestanden gedownload worden.
Het downloaden van deze bestanden zal ongeveer een minuut duren.
Je kan de downloadvoortgang onderaan in Libero in een logvenster volgen.
 * klik op: "Design" -> configure firmware
 * Klik op de groene knop om ontbrekende firmware te downloaden
 * Firmware die "grijs is" is nog niet gedownload

## Aanmaken van een nieuw project

### Geen spaties
Gebruik geen spaties in bestandsnamen of foldernamen.
Plaats je project bij voorkeur in een korte folder zoals: ``c:/embedded/labo1/``.
Omdat je verschillende tools gebruikt die zaken aan elkaar moeten doorgeven (via commandline parameters) mogen er geen spaties in deze paden staan.
In principe zou je ook altijd "" rond al deze parameters kunnen zetten maar het is eenvoudiger om gewoon nooit spaties te gebruiken (gebruik ter vervanging eventueel underscores: "_" )
Typische problemen: SoftConsole start op zonder dat de projecten worden getoond, de linker kan bepaalde .o bestanden niet vinden, ...

### Korte foldernaam
Onder Windows is er een harde limiet op de maximale lengte van "folder+filename".
Als je een te lange foldernaam gebruikt kan je hierdoor problemen krijgen.




