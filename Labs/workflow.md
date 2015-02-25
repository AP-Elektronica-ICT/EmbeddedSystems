# Workflow

## Traditioneel Embedded Design

### Ontwikkeling van een ``Product''
 * Tijdens een volledig design worden verschillende stappen doorlopen
 * In grote projecten zal iedere stap van een design de verantwoordelijkheid van een team zijn.

### Vereenvoudigde voorstelling:
 *  Vaststellen van een probleem of vraag naar een toepassing
 * Analyse van het probleem
 * Ontwerp van een conceptuele oplossing
 * Ontwerp van de hardware \footnote{Dit valt volledig binnen ons vakgebied.}
 * Ontwerp van de software \footnotemark[1]
 * Mechanisch/fysiek ontwerp


## Voorbereidende stappen

### Vaststellen van een probleem of vraag naar een toepassing
 * Uitvoeren van een marktonderzoek
 * Financiële analyse

### Analyse van het probleem
 * Wat zijn de noden van de gebruiker
 * Waarom is er een vraag naar een oplossing
 * Wie zijn de potenti\"ele klanten

### Ontwerp van een conceptuele oplossing
 * Uitwerken van de oplossing aan de hand van een mock-up
 * Ontwerp van een niet-functioneel prototype
 * Uitvoeren gebruikerstests

## Embedded Hardware Design
 * Ontwerp van een hardware prototype op een breadboard (microcontroller schakeling)
 * Ontwerp van een hardware prototype op een gatenprint
 * Ontwerp van printed-circuit board (PCB)
 * Productie van PCB (etsen/frezen)
 * Bestukken en testen van PCB


# Embedded Processing Unit}
De hardware wordt uitgerust met een microcontroller

Dit is een processor met extra mogelijkheden naar I/O interfacing toe
 * Analoog Digitaal Converters (ADC)
 * Seriëele communicatie: UART, SPI, I2C
 * General Purpose Input Output pinnen (GPIO)

Er zal software geschreven worden die wordt uitgevoerd door deze processor (meestal C/C++)
Voordeel: flexibiliteit, aanpasbaarheid, vlotte communicatie tussen devices 


## Embedded Software Design}
 * Ontwerp van een software architectuur: bouwstenen, lagen, functionele blokken,...
 * Schrijven/gebruiken van bibliotheken voor I/O interfacing
 * Ontwerp van een ``main'' applicatie: State machine, interrupt based, real-time operating system (RTOS),...
 * Bij normaal uitvoeren van een embedded toepassing: beperkt zicht op wat software aan het doen is
 * On-chip debuggen van de toepassing: toepassing stap-per-stap uitvoeren om fouten op te sporen (plaatsen breakpoints, geheugeninhoud bekijken \& aanpassen).

# Hardware / Software Co-design
## Programmeerbare Logica}
Field Programmable Gate Array (FPGA)
 * Volledig herprogrammeerbaar alternatief voor een ASIC
 * Een FPGA wordt normaal gebruikt om custom gedrag in een chip te implementeren. (ALU, counters, state machines,...)
 * Voordeel: flexibiliteit \& aanpasbaarheid: rekenkracht en I/O mogelijkheden

## Programmeerbare Logica
Bij FPGA programmeren worden o.a. de volgende twee stappen uitgevoerd:
 * De logische opbouw van de schakeling ontwerpen.
 * De manier waarop de schakeling met de buitenwereld is verbonden vastleggen. (mapping van fysieke naar logische pinnen)

## Samenvoegen FPGA \& Microcontroller
Zowel een FPGA als een microcontroller heeft zijn voordelen:
 * Microcontroller: development tijd, aanpasbaarheid, vlotte communicatie tussen devices 
 * FGPA: rekenkracht en I/O mogelijkheden

Door de twee te combineren kunnen we de voordelen van de twee types combineren.
 * We kunnen toepassingen ontwikkelen in C en deze laten communiceren met zelf ontworpen hardware.
 * Daarnaast kan de toepassing eenvoudig via de UART met een PC verbonden worden.
 * Dit alles zonder de echte hardware te moeten aanpassen. (``zonder soldeerbout'')


Microsemi SmartFusion

TODO: add images

 * Alternatieven: Zynq-7000 (Xilinx)
 * Alternatieven: Atom E6x5C Serie (Intel/Altera)}


# Overzicht Design Flow}

## Configuratie SoC}
Gebeurt m.b.v. ``Libero: MSS Configurator''

Configureer de microcontroller
 * Stel in welke I/O devices actief zijn
 * Stel klokfrequentie van de microcontroller in

Plaats eventueel extra schakelingen in de FPGA


## Hardware ``Synthese++''}
Gebeurt m.b.v. ``Synplify Pro''

Doorloop de nodige stappen op de configuratie uit de vorige stap om te vormen tot een bestand dat kan geupload worden naar de SoC

Deze stappen verlopen ons geval zo goed als automatisch: mits de juiste instellingen zijn gekozen
 * Welke FPGA/SoC is in gebruik
 * Zijn de licentie van de software tools correct ge\"installeerd


## Programmeren SoC}
Gebeurt m.b.v. ``Flashpro''
 * Uploaden van het hardware design naar de SoC
 * Indien je in de vorige stap het hardware designbestand opslaat kan je in volgende projecten/oefeningen waar dezelfde configuratie nodig is de voorgaande stappen overslaan.

## Software/Firmware Ontwikkeling}
 Gebeurt m.b.v. ``Softconsole (een re-branded Eclipse IDE)''


## Firmware Debugging}
Gebeurt m.b.v. ``GDB/OpenOCD''
