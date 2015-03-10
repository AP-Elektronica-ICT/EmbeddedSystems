# Solutions

Deze folder bevat een basis FlashPro en SoftConsole project om te testen of je bordje werkt
 * in FlashPro staat de UART aan en is verder alle hardware uitgeschakeld 
 * in het voorbeeldprogramma wordt in een loop een variabele met 1 verhoogd (om te testen of je debugger werkt)

Beschrijving folders:
 * FlashPro: bevat het eindresultaat van de configuatie die gebeurt is in Libero (dit bestand kan gebruikt worden om de hardware configuratie weg te schrijven in het development bordje)
 * SoftConsole: bevat de software/firmware workspace die je kan compileren en uploaden naar een bordje nadat dit met FlashPro geconfigureerd is. 

Installatie:
 1. Open het "Opgave1_UART.pro" bestand met FlashPro en upload het naar je ontwikkelbord
 2. Open de SoftConsole workspace -> "switch workspace" -> selecteer de "SoftConsole" folder
 3. Compileer het "app" project (ctrl-b)
 4. Upload de binary naar je ontwikkelbord ("debug" -> "upload to board")
