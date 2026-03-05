## Develop 1
### Doelstellingen
Het doel van deze fase is om concept testing uit te voeren en de promise value definieëren. Dit via enkele interviews en fysieke testen. Verder zijn er verschillende structuren toegepast om de interacties en archtectuur van het product vast te stellen. Hierna kan er volledig gefocused worden op het product zelf en de gebruikstesten. Concreet werden volgende punten onderzocht. 

- Onderzoeken welke bevestigingsmethode werkt voor ons product.
- Finaal onderzoek naar valuepromise.
- Extra conceptvalidatie d.m.v. interviews.
- Vaststellen productarchitectuur met betrekking tot elektronica.

### Materiaal & methoden
Om de productarchitectuur te bepalen, werd een schema opgesteld in Figma. Voor het in kaart brengen van de interacties werden verschillende structuren uitgewerkt. Dit omvat onder andere storyboards en user flows. Als laatste werden enkele “Amerikaanse koelkasten” bekeken als benchmarking.
#### Concept test
Deze test werd uitgevoerd om de meest geschikte bevestigingsmethode voor de koelkast te bepalen. Er werden drie opties gedefinieerd: magneten, dubbelzijdige tape en kleefgum (Pritt Buddies). Met behulp van een zakje zand, dat het product voorstelt wat betreft massa, kan worden getest welke bevestigingsmethode optimaal is.

<p align="center">
  <img src="/img/Scharnier.JPEG" width=50%/>

Het gewicht is verbonden met een scharnier. Op deze manier wordt de bevestigingsmethode in verschillende standen getest. Daarnaast worden ook de sterkte van het scharnier en die van de verbinding geëvalueerd.

#### User interviews
De gebruikersinterviews hebben als doel de value proposition van het product te bepalen. Daarnaast wordt er gepeild naar feedback over de interface. Dit zorgt ervoor dat er geen essentiële zaken over het hoofd worden gezien. Het betreft semigestructureerde interviews die werden afgenomen volgens het [protocol](https://docs.google.com/document/d/e/2PACX-1vT5qwDmTJz31Pu7O_5GgxLXhZHN01odxg5vEh5BfgYlWgnNDJRftLWxD9k230-aiaKeoALtmhIkP-6a/pub).

Bij de interviews met begeleiders werd gebruik gemaakt van enkele foto’s en een in FigmaMake interface om het product en het probleem duidelijk te schetsen.
<p align="center">
  <img src="/img/Interface_Develop1.png" widt=100%>

### Resultaten
Het schema van de productarchitectuur op het vlak van elektronica werd opgesteld in Figma, volgens een voorbeeld uit de les. Dit werd ontworpen op basis van de commentaren uit de product pitch.
<p align="center">
  <img src="/img/Productarchitectuur.png" width=100%/>

Om de interacties te mappen, werd vertrokken vanuit twee storyboards.
<p align="left">
  <img src="/img/Storyboard2.png" width=50%/>

Vervolgens werden verschillende structuren opgesteld om een duidelijk beeld te krijgen van de onderliggende redenering bij interacties met het product.
<p align="center">
  <img src="/img/User_Flow.png" width=33%/>
  <img src="/img/HTA.png" width=33%/>
  <img src="/img/Customer_Journey.png" width=33%/>

#### Concept test
De drie bevestigingsmethoden werden getest met een scharnier en een gewicht dat het product voorstelt.

Bij magneten bleef het systeem stabiel in gesloten stand, maar bij het openen bleek het moment van de massa te groot, waardoor het scharnier scheef begon te hangen. Sterkere magneten zouden dit kunnen oplossen, maar zouden de prijs verhogen en zijn bovendien enkel bruikbaar bij niet-ingebouwde koelkasten.

De kleefgum (Pritt Buddies) presteerde zeer goed in zowel open als gesloten stand en bleek sterker dan verwacht. Het is bovendien eenvoudig te verwijderen en relatief goedkoop.

De dubbelzijdige tape zorgde voor een stabiele en rechte bevestiging en hield het scharnier stevig vast in beide standen. Het nadeel is dat de verbinding moeilijker los te maken is, al is de prijs van de tape wel laag.
<p align="center">
  <img src="/img/develop1.jpg" width=24%/>
  <img src="/img/develop12.jpg" width=24%/>
  <img src="/img/dubbelzijdige.jpg" width=24%/>
<img src="/img/dubbelzijdige2.jpg" width=24%/>
</p>

#### User interviews (N = 3)
Uit de gesprekken met gebruikers en begeleiders blijkt dat toegankelijkheid en gebruiksgemak de belangrijkste succesfactoren zijn voor het systeem. Het koppelen van het beheer aan bestaande digitale oplossingen en het voorzien van duidelijke, aanpasbare interfaceopties kan de ervaring aanzienlijk verbeteren, vooral voor blinde en slechtziende gebruikers. 

Door de nadruk te leggen op flexibiliteit en integratie met hulpmiddelen kan het systeem niet alleen praktische problemen oplossen, maar ook bijdragen aan een zelfstandiger en efficiënter gebruik van de koelkast.

Voor het bijhouden van de inventaris werden suggesties gedaan, zoals het koppelen van het systeem aan een app die kassabonnen opslaat via de klantenkaart van de gebruiker.

Om de houdbaarheidsdata bij te houden, wordt momenteel gebruikgemaakt van Zuzanka, een app die de verpakkingen van producten leest. Deze app zou synchroon kunnen werken met de TastMate, zodat er niet telkens een onbetrouwbare schatting door AI moet worden gemaakt.


**Interface :** De interface werd goed ontvangen door de begeleiders. De functie die het mogelijk maakt om de categorieën naar de gewenste plaats in de koelkast te verslepen, werd als een pluspunt gezien. Ook visueel viel de interface in de smaak.

Er werd wel opgemerkt dat de interface met enkele aanpassingen toegankelijker kan worden gemaakt voor slechtziende personen. Dit kan bijvoorbeeld door een optie toe te voegen die het contrast verhoogt, vergelijkbaar met een donkere modus in een app. Daarnaast werd ook een optie gevraagd om het lettertype te vergroten. Alle drie de respondenten gaven ook aan dat de interface moet werken met schermleessoftware zoals VoiceOver. Wanneer een vinger op het scherm wordt geplaatst, leest de software de tekst onder de vinger voor.

Ten slotte werd vermeld dat de interface instelbaar moet zijn volgens de lay-out van verschillende koelkasten.

### Conclusies & implicaties
Zowel dubbelzijdige tape als kleefgum waren geschikte opties, maar er is gekozen voor dubbelzijdige tape omdat deze een sterkere hechting en eenvoudigere bevestiging biedt. Het feit dat de verbinding moeilijk los te maken is, vormt geen probleem, aangezien de TasteMate bedoeld is om langdurig (jaren) bevestigd te blijven.

Uit de interviews blijkt dat de belangrijkste value promise van het systeem ligt in het toegankelijk maken van informatie op verpakkingen en het overzicht van de aantallen producten in de koelkast. Door deze informatie op een begrijpelijke en toegankelijke manier beschikbaar te maken, kunnen blinde en slechtziende gebruikers zelfstandiger hun voorraad beheren en houdbaarheidsdata opvolgen. Dit vormt de kern van het systeem en bepaalt de meerwaarde ervan voor de doelgroep.
