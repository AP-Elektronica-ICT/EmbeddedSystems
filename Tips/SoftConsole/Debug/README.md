# TIPS i.v.m. het debug proces


## No symbol "__vector_table_vma_base_address"
Op pagina 25 van de release notes van SoftConsole 3.4 staat de oplossing voor de fout 'No symbol "__vector_table_vma_base_address" in current context.'.

Deze fout verscheen willekeurig in de console (niet bij de 'problems') na een aantal builds of soms al bij de eerste build, waarna er niet meer in het project verder gewerkt kon worden.
Om dit op te lossen moet het gebruikte linkerscript aangepast worden. In mijn geval was dit C:\Microsemiprj\SC_standalone_polled\UART\SoftConsole\UART_MSS_CM3_0\UART_MSS_CM3_0_hw_platform\CMSIS\startup_gcc\debug-in-actel-smartfusion-esram.ld.

De instructie '__vector_table_vma_base_address = .;' moet vervolgens op lijn 49 van het linkerscript toegevoegd worden.

"Clean & rebuild" daarna zowel uw hardware als uw app project. 

Hierna zou de fout niet meer morgen verschijnen.
