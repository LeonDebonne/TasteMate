#!/bin/bash

export DISPLAY=:0
export XAUTHORITY=/home/tastemate/.Xauthority

# oude processen afsluiten
pkill -f server.py
pkill -f "http.server 5173"
pkill -f chromium

# backend starten
cd /home/tastemate/TasteMate_Opkomende_Tech/webserver
source .venv/bin/activate
python server.py &

# frontend server starten
cd /home/tastemate/TasteMate_Opkomende_Tech/webserver/dist
python3 -m http.server 5173 &

# wake-up script starten
cd /home/tastemate/TasteMate_Opkomende_Tech/wake_up
python3 wake_up.py &

# wachten tot alles gestart is
sleep 10

# chromium starten
chromium-browser --kiosk http://localhost:5173 \
--password-store=basic \
--disable-translate \
--disable-features=Translate \
--no-first-run \
--disable-infobars &

sleep 20
 # assistent starten
cd /home/tastemate/TasteMate_Opkomende_Tech/Assistent
source .venv/bin/activate
GPIOZERO_PIN_FACTORY=lgpio python3 TasteMate_Rpi.py