## Develop 2

### Doelstellingen
Het hoofddoel van deze deelopdracht is de antropometrie en usability van het product te analyseren. Via gebruikstesten met prototypes worden deze belangrijke pijlers getoetst. Daarnaast wordt een introductie met Arduino uitgevoerd, meer bepaald het wake-upmechanisme. De finale doelstellingen zijn:
- Oriëntering in de elektronica van het wake-upmechanisme
- Optimaliseren van de antropometrische aspecten
- Analyseren van de usability
### Materialen en methoden

#### Oriëntering Arduino
Voor dit onderdeel is het de bedoeling om met Arduino een systeem te maken dat detecteert wanneer er een persoon voor de koelkast staat. Vervolgens moet het scherm aangaan en krijgt de gebruiker een audiotrigger om te laten weten dat het scherm is ingeschakeld.

Als de persoon voor het scherm gedetecteerd blijft, blijft het scherm ingeschakeld. Wanneer de persoon echter meer dan 10 seconden weg is, schakelt het scherm automatisch weer uit.

Er is gebruikgemaakt van enkele Arduino-componenten, zoals de Arduino Uno, een afstandssensor en een buzzer.
#### User tests
Vooraf moet worden bepaald welk onderdeel of “touchpoint” geanalyseerd wordt op het vlak van antropometrie en usability. Hiervoor werd een [Excel document](/reports%20and%20protocols/Touchpoints.xlsx) opgesteld. Hieruit bleek dat het scherm de relevantste touchpoint is.

Tijdens de gebruikstesten werd het volgende prototype gebruikt. Dit kan rond twee assen roteren met behulp van twee scharnieren die aan elkaar bevestigd zijn. Zo kan de hoek waaronder men het scherm bekijkt worden ingesteld en wordt het gebruik bij een open koelkast toegankelijk gemaakt.
<p align="left">
<img src="/img/Geannoteerde foto.png" width="100%">
Bij aanvang van de testen wordt aan de gebruiker gevraagd om het prototype op een volgens hen optimale hoogte en hoek te plaatsen. Deze maten worden, samen met de lengte van de testpersoon, later gebruikt voor de antropometrische analyse.

De interface die gebruikt wordt, is die uit Develop 1. Deze werd aangepast op basis van feedback uit die fase. Zo kan het contrast worden aangepast naar verschillende kleuren en is het mogelijk om de lay-out naar eigen voorkeur te wijzigen.
<p align="left">
<img src="/img/Interface_Develop2.jpg" width="100%">
Met deze interface voeren de testpersonen vier verschillende taken uit, terwijl het Thinking Aloud Protocol wordt toegepast. Na afloop van deze taken vullen de testpersonen nog de System Usability Scale in.

### Resultaten

#### Oriëntering Arduino
De code die gebouwd is voor dit systeem is te vinden in de map tests.

Het resultaat is quick en dirty gerealiseerd om zo weinig tijd te verliezen aan het opfleuren van iets dat louter testen van een concept is. 
<p align="center">
<img src="/img/Arduino.jpg" width="50%">

#### User tests
**Antropometirische analyse :**

**Usability :**

### Conclusies & implicaties

#### User tests
**Antropometirische analyse :**

**Usability :**
