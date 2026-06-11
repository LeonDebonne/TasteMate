#include <Arduino_LSM6DS3.h>

#define TRIG_PIN 3
#define ECHO_PIN 2

float x, y, z;
float startX = 0;
bool startPositionSet = false;
bool isOpen = false;
bool someoneNear = false;

void setup() {
  Serial.begin(9600);

  if (!IMU.begin()) {
    Serial.println("IMU niet gevonden!");
    while (1);
  }

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.println("Systeem gestart...");
}

long readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 25000); // timeout 25ms
  if (duration == 0) return -1; // geen meting
  return duration * 0.034 / 2;
}

void loop() {
  // === IMU: deurpositie ===
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);

    if (!startPositionSet) {
      startX = x;
      startPositionSet = true;
      Serial.println("Startpositie opgeslagen");
    }

    float verschil = abs(x - startX);

    if (verschil > 0.9 && !isOpen) {
      Serial.println("Koelkast is open");
      isOpen = true;
    }

    if (verschil < 0.2 && isOpen) {
      Serial.println("Koelkast is dicht");
      isOpen = false;
    }
  }
  delay(200);
}