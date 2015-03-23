# Solutions

Deze folder bevat een de oplossing voor het labo:  3_GPIO.

Beschrijving folders:
 * FlashPro: bevat het eindresultaat van de configuatie die gebeurt is in Libero (dit bestand kan gebruikt worden om de hardware configuratie weg te schrijven in het development bordje)
 * SoftConsole: bevat de software/firmware workspace die je kan compileren en uploaden naar een bordje nadat dit met FlashPro geconfigureerd is. 

Installatie:
 1. Open het "placeholder" bestand en upload het naar je ontwikkelbord d.m.v. FlashPro
 2. Open de SoftConsole workspace -> "switch workspace" -> selecteer de "SoftConsole" folder
 3. Compileer het "app" project
 4. Upload de binary naar je ontwikkelbord ("debug" -> "upload to board")
 
Instellingen hardware:
 * LEDs verbonden met GPIO 0 tot 7
 * pushbuttons: verbonden met GPIO 8 en 9 (zie voorbeeldcode)
