## Develop 2

### Doelstellingen
Het hoofddoel van deze deelopdracht is de antropometrie en usability van het product te analyseren. Via gebruikstesten met prototypes worden deze belangrijke pijlers getoetst. Daarnaast wordt een introductie met Arduino uitgevoerd, meer bepaald het wake-upmechanisme. Dit is te vinden in de map tests. De finale doelstellingen zijn:
- Oriëntering in de elektronica van het wake-upmechanisme
- Optimaliseren van de antropometrische aspecten
- Analyseren van de usability 

Bij dit laatste puntje zijn er ook usability goals opgesteld:
- Het systeem behaalt een SUS-score van minimum 80.
- Het product minimaliseert de tijd, het aantal stappen en de cognitieve belasting tijdens gebruik.
- Na een korte verkenning is het duidelijk hoe er producten toegevoegd en verwijderd kunnen worden.
- Tijdens de taken wordt er maximaal 1 maal ondersteuning van de onderzoekers vereist.
- De functies van alle knoppen op het interface zijn duidelijk.

### Materialen en methoden

Vooraf moet worden bepaald welk onderdeel of “touchpoint” geanalyseerd wordt op het vlak van antropometrie en usability. Hiervoor werd een [Excel document](/reports%20and%20protocols/Touchpoints.xlsx) opgesteld. Hieruit bleek dat het scherm de relevantste touchpoint is. Dit wordt ook nog eens geanalyseerd via de human Jack in Siemens NX.

Bij het ontwerpen van de interface moet er rekening gehouden worden met de GESTALT-wetten om de congnitive load zo laag mogelijk te houden. De interface wordt hier ook op geëvalueerd.
#### User tests

Tijdens de gebruikstesten werd het volgende prototype gebruikt. Dit kan rond twee assen roteren met behulp van twee scharnieren die aan elkaar bevestigd zijn. Zo kan de hoek waaronder men het scherm bekijkt worden ingesteld en wordt het gebruik bij een open koelkast toegankelijk gemaakt.
<p align="left">
<img src="/img/Geannoteerde foto.png" width="100%">
Bij aanvang van de testen wordt aan de gebruiker gevraagd om het prototype op een volgens hen optimale hoogte en hoek te plaatsen. Deze maten worden, samen met de lengte van de testpersoon, later gebruikt voor de antropometrische analyse.

De interface die gebruikt wordt, is die uit Develop 1. Deze werd aangepast op basis van feedback uit die fase. Zo kan het contrast worden aangepast naar verschillende kleuren en is het mogelijk om de lay-out naar eigen voorkeur te wijzigen. Er is ook rekening gehouden met de GESTALT-wetten en signifiers. Een voorbeeld van het laatste zijn de icoontjes op de functieknoppen bovenaan.
<p align="left">
<img src="/img/Interface_Develop2.jpg" width="100%">
Met deze interface voeren de testpersonen vier verschillende taken uit, terwijl het Thinking Aloud Protocol wordt toegepast. Na afloop van deze taken vullen de testpersonen nog de System Usability Scale in.

### Resultaten
De interface voldoet aan enkele GESTALT-wetten. Een voobeeld is de gelijkenissen tussen de categorieën. Hierdoor worden ze gegroepeerd en als elementen van Hetzelfde type gezien. Een grondigere analyse is te zien op de afbeelding hieronder.
<p align="center">
<img src="/img/Gestalt.png" width="75%">


#### User tests (N=4)
**Antropometirische analyse :**
Het antropometrische gedeelte werd vooraf getest met de human Jack in NX. Hierbij wordt het prototype onder verschillende hoeken geplaatst om dit te analyseren met behulp van de comfort analysis in NX. De onderzochte hoeken zijn 0°, 10°, 22,5° en 45°. De belangrijkste parameters zijn die van de nek.
<p align="center">
<img src="/img/Human_Jack.jpg" width="50%">

De hoeken zijn op bovenstaande afbeelding van klein naar groot gerankschikt.

Hieruit kan worden afgeleid dat 22,5° de meest ideale hoek is. Er is echter geen groot verschil tussen de verschillende standen, waardoor de instellingshoek vooral zal afhangen van de persoonlijke voorkeur van de gebruiker. Daarom is het prototype instelbaar, wat aansluit bij het principe van design for adjustability.

Voor de antropometrische testen werden in totaal 10 mensen opgemeten, zodat een bredere steekproef werd verkregen. Er werd telkens gevraagd om het prototype op de gewenste hoogte en hoek in te stellen.
Hieruit kwamen twee groepen naar voren: mensen die het op ooghoogte hingen en verticaal met de wand plaatsten, en mensen die het op borsthoogte hingen met het scherm een stukje naar boven gekanteld.
Dit bevestigt opnieuw onze eerder genomen conclusie dat design for adjustability hier de beste ontwerpmethode is.

**Usability :**
Voor deze usabilitytest werden vier mensen uit verschillende leeftijdsgroepen geïnterviewd. Na een korte verkenning konden ze de verschillende functies snel gebruiken en terugvinden. De iconen bleken echter niet altijd even duidelijk. Voor de functie om een kassabon te scannen werd bijvoorbeeld gesuggereerd dat een camera-icoon beter zou passen dan het huidige frame-icoon.

Bij het toevoegen van een product of categorie waren er soms geen iconen die deze goed representeerden. Ook werd de grote deleteknop bij de categorieën als storend ervaren. Ten slotte werd gevraagd om een duidelijker bevestigingsicoon op het toetsenbord tijdens het invoeren van producten of categorieën.

<p align="left">
<img src="/img/Usertest1.JPEG" width="32%">
<img src="/img/Usertest2.JPEG" width="32%">
<img src="/img/Usertest3.JPEG" width="32%">

De gebruikers navigeerden zelfzeker door de interface en er was nauwelijks hulp nodig van de onderzoeker. Het systeem behaalde een gemiddelde SUS-score van 81,75, met individuele scores van 82,5, 86, 72,5 en 86. Onze vooraf opgestelde usability-doelstelling van een score van 80 werd dus gehaald. Met de feedback uit deze testen kan de score in de toekomst mogelijk nog verder worden verhoogd.

### Conclusies & implicaties

De resultaten tonen aan dat het ontwerp zowel op ergonomisch als op gebruiksvlak goed functioneert. Door het systeem instelbaar te maken kan het aangepast worden aan verschillende gebruikers en gebruikssituaties, wat het comfort en de toegankelijkheid vergroot. Daarnaast bevestigen de gebruikstesten dat de interface intuïtief genoeg is om door nieuwe gebruikers vlot te worden gebruikt.

Op basis van de verzamelde feedback zijn er nog enkele optimalisaties mogelijk, voornamelijk op het vlak van visuele duidelijkheid binnen de interface. Echter zijn dit geen grote problemen en kunnen ze snel vermeden worden. Door deze verbeteringen door te voeren kan de algemene gebruikservaring verder verfijnd worden en kan het systeem nog beter aansluiten bij de verwachtingen van de gebruiker.

Alle vooropgestelde usability-goals zijn voldaan door het interface behalve die over de duidelijkheid van de iconen.


