## Tests
### Test Afstandssensor
De afstandssensor wordt in het project gebruikt om te detecteren of er een persoon voor de koelkast staat. Deze sensor meet de afstand tot een bepaald object.
De opstelling bevat een Raspberry Pi, de sensor en vier jumpers.

<p align="center"> 
<img src="/img/Schema_Afstandssensor.png" width="50%">

De [code](/tests/afstandssensor.py) maakt gebruik van de gpiozero library en de time library.
### Test Buzzer
De buzzer maakt een kort geluid om gebruikers te vertellen dat het scherm aan staat. De opstelling bevat een Raspberry Pi, de buzzer en twee jumpers.

<p align="center"> 
<img src="/img/Schema_Buzzer.png" width="50%">

De [code](/tests/buzzer.py) maakt gebruik van de gpiozero library en de time library.
### Test Scherm
Het scherm toont de interface en kan gebruikt worden via touchscreen. Er wordt gebruik gemaakt van een 4.3 inch HDMI LCD. 
De opstelling bevat een Raspberry Pi, het scherm en een HDMI-kabel. De connectie gebeurt dus via de HDMI-kabel.
De [code](/tests/scherm.py) maakt gebruik van de tkinter library

### Intro wake-up mechanisme
Voor dit onderdeel is het de bedoeling om met Arduino een systeem te maken dat detecteert wanneer er een persoon voor de koelkast staat. Vervolgens moet het scherm aangaan en krijgt de gebruiker een audiotrigger om te laten weten dat het scherm is ingeschakeld.

Als de persoon voor het scherm gedetecteerd blijft, blijft het scherm ingeschakeld. Wanneer de persoon echter meer dan 10 seconden weg is, schakelt het scherm automatisch weer uit.

Er is gebruikgemaakt van enkele Arduino-componenten, zoals de Arduino Uno, een afstandssensor en 
een buzzer.

De code die gebouwd is voor dit systeem is te vinden in deze map.

Het resultaat is quick en dirty gerealiseerd om zo weinig tijd te verliezen aan het opfleuren van iets dat louter testen van een concept is. 
<p align="center">
<img src="/img/Arduino.jpg" width="50%">