# TIPS i.v.m. het debug proces

## Breakpoint op regel 1 van main
Om een een breakpoint op regel één van de main functie te plaatsen:
 * Voeg de tekst "tb main" toe als laatste regel van de "commands" bij de instellingen van je debug configuratie (betekenis "tb" -> temporary breakpoint

## Registers & variabelen:
De inhoud van registers en variabelen is alleen zichtbaar wanneer deze "in scope" zijn (vanuit het standpunt van de program flow)
Als je een bepaalde variabele toch de hele tijd zou willen zien dan moet je deze -tijdelijk- globaal maken.

Om een willekeurige variabele toe te voegen aan het logging venster kan je rechts klikken op een variabele en "add watch expression" selecteren.


## No symbol "__vector_table_vma_base_address"
Op pagina 25 van de release notes van SoftConsole 3.4 staat de oplossing voor de fout 'No symbol "__vector_table_vma_base_address" in current context.'.

Deze fout verscheen willekeurig in de console (niet bij de 'problems') na een aantal builds of soms al bij de eerste build, waarna er niet meer in het project verder gewerkt kon worden.
Om dit op te lossen moet het gebruikte linkerscript aangepast worden. In mijn geval was dit C:\Microsemiprj\SC_standalone_polled\UART\SoftConsole\UART_MSS_CM3_0\UART_MSS_CM3_0_hw_platform\CMSIS\startup_gcc\debug-in-actel-smartfusion-esram.ld.

De instructie '__vector_table_vma_base_address = .;' moet vervolgens op lijn 49 van het linkerscript toegevoegd worden.

"Clean & rebuild" daarna zowel uw hardware als uw app project. 

Hierna zou de fout niet meer morgen verschijnen.

## Verbose modus
Om meer gedetailleerde informatie over het debug proces te bekomen kan je de debugger in "verbose" modus uitvoeren.

Om deze modus in te schakeling zet je een extra "-v" flag in de Debug configuratie. 
![screenshot](/Tips/SoftConsole/Debug/screenshots/verboseMode_setting.PNG?raw=true "screenshot")(screenshot)

![Screenshot](/Tips/SoftConsole/Debug/screenshots/verboseMode_output.PNG?raw=true "Screenshot")(Screenshot) van output in "verbose modus".
