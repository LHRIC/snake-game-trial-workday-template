#include <Arduino.h>
#include <SoftwareSerial.h>

const uint8_t RX_PIN = 2;
const uint8_t TX_PIN = 3;
SoftwareSerial Serial1(RX_PIN, TX_PIN);

void setup() {
  pinMode(RX_PIN, INPUT);
  pinMode(TX_PIN, OUTPUT);

  Serial1.begin(115200);
  Serial.begin(115200);
}

void loop() {
  char input = 0;

  if (Serial.available()) {
    input = (char)Serial.read();
  }

  // Keep this to slow down messages
  delay(10);
}
