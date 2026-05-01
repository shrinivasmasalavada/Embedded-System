#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

int led = 2;

void setup() {
  pinMode(led, OUTPUT);

  SerialBT.begin("ESP32_BT");
}

void loop() {
  if (SerialBT.available()) {

    char data = SerialBT.read();

    if(data == '1') {
      digitalWrite(led, HIGH);
    }

    if(data == '0') {
      digitalWrite(led, LOW);
    }
  }
}