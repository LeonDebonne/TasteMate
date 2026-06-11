## Code
In deze map bevindt zich alle code die nodig is om de TasteMate te runnen.

Het project bestaat uit 3 onderdelen die elk hun eigen functie vervullen. Deze onderdelen moeten op hetzelfde moment lopen om een werkend systeem te verkrijgen.
### Wake-up
Dit onderdeel volgt dezelfde logica als de test met de Arduino. Hier en daar zijn echter enkele aanpassingen uitgevoerd om de workflow te optimaliseren. Deze aanpassingen bevinden zich voornamelijk in de vertragingen tussen scans en detecties.

Het systeem detecteert of er een persoon voor de koelkast staat. Wanneer er gedurende 10 seconden geen interactie meer is met het scherm, wordt het automatisch uitgeschakeld. Deze interactie wordt gemeten met behulp van de library pyautogui, die muis- en touchinteracties registreert.

Naast de library voor interactiemeting wordt ook gebruikgemaakt van de gpiozero-library. Deze dient voor het definiëren van de sensoren en actuatoren. Daarnaast worden ook de time- en subprocess-libraries gebruikt. Deze zorgen respectievelijk voor de tijdsvertragingen en het uitvoeren van systeemcommando’s. Dat laatste is nodig om het scherm in en uit te schakelen.
[Python code](/src/wake_up/wake_up.py).

Deze [demo](https://drive.google.com/file/d/15hXSTagw5abH1k6NjG4eRMN9H7aIJM2_/view?usp=drive_link) toont de werking van de interface en het wake-up mechanisme.

Het systeem gebruikt deze logica: 
<p align="center">
  <img src="/img/wakeup_flowchart.svg" width="50%">
</p>

### Webservers
Op het scherm dat wordt ingeschakeld door het wake-upmechanisme, wordt de interface weergegeven. Deze houdt de inventaris van de koelkast bij. De inventaris bevat gegevens zoals de houdbaarheidsdatum, het aantal en de locatie van producten.

De applicatie maakt gebruik van twee lokaal gehoste servers op de Raspberry Pi. De interface draait op een lokale webserver die automatisch in kioskmodus wordt weergegeven in Chromium, de browser op de Raspberry Pi. Dit gebeurt via een eenvoudige HTTP-server op poort 5173.

De logica en communicatie met de AI-assistent verlopen via een Python-backendserver. Deze houdt de inventarisgegevens bij, die worden opgeslagen in een JSON-bestand dat door de AI kan worden geraadpleegd.

De interface zelf is ontworpen met FigmaMake. Alle code met betrekking tot het design en de werking van de interface is hieruit overgenomen, met hier en daar enkele aanpassingen met behulp van AI. De Python-backendserver en de JSON-inventaris zijn achteraf eveneens met behulp van AI ontwikkeld.

De benodigde code voor dit onderdeel is te vinden in de map [webserver](/src/webserver). Dit bevat de python code voor de server die de inventaris bijhoudt alsook alle bouwstenen die het geheel van de interface vormen.
### Assistent
De assistent is een spraakgestuurde koelkastassistent die continu luistert via een microfoon. Spraak wordt via Google Speech Recognition omgezet naar tekst en samen met de actuele koelkastinhoud en gespreksgeschiedenis naar Google Gemini gestuurd, dat een antwoord formuleert. Dit antwoord wordt via Microsoft Edge TTS omgezet naar een natuurlijke Nederlandse stem en afgespeeld via de luidspreker.

De koelkastinhoud wordt bijgehouden in een JSON-bestand dat automatisch wordt bijgewerkt en bij elke vraag opnieuw wordt ingelezen, zodat de assistent altijd met actuele gegevens werkt. Door ook de recente gespreksgeschiedenis bij te houden begrijpt hij de context en kan hij logisch doorpraten zonder dat de gebruiker zich hoeft te herhalen.

Technisch is het systeem geschreven in Python en maakt het gebruik van SpeechRecognition, de Gemini-library, Edge TTS, Pygame, en asyncio om alles gelijktijdig en responsief te laten verlopen. Dit is een [demo](https://drive.google.com/file/d/14yIs6-6K8cf76QumfmExPYO-qfYbNQzW/view?usp=sharing) hiervan.

Alle code in verband met dit onderdeel is te vinden in de map [assistent](/src/assistent)

Het systeem gebruikt deze logica: 
<p align="center">
  <img src="/img/assistent_flowchart_v3.svg" width="50%">
</p>

### Demo
De [demo](https://drive.google.com/file/d/180jzexIB4C8E2kLoHuXuokE77BI3YjYS/view?usp=drive_link) van het volledige systeem maakt gebruik van een scherm dat uitsluitend via de Raspberry Pi is verbonden. Dit omdat het touchscreen blokkeerde tijdens de tests. Het valideert wel dat het systeem kan werken als de bugs eruit gehaald worden.

Er zijn verschillende mogelijke oorzaken voor het vastlopen van de Raspberry Pi bij gebruik van het touchscreen. Een eerste oorzaak is dat de audio-in- en uitvoer in de war raakt doordat het touchscreen twee USB-poorten in gebruik neemt, waardoor het scherm mogelijk als audio-uitgang wordt geregistreerd.

Een tweede oorzaak kan zijn dat de powerbank onvoldoende vermogen levert om alle onderdelen gelijktijdig te laten werken. Het touchscreen verbruikt aanzienlijk meer energie dan het gewone scherm, dat enkel via HDMI is aangesloten.