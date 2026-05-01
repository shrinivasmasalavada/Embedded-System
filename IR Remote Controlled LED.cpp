#include <IRremote.h>

int receiver = 15;
int led = 2;

void setup() {
  pinMode(led, OUTPUT);
  IrReceiver.begin(receiver);
  Serial.begin(115200);
}

void loop() {
  if (IrReceiver.decode()) {

    digitalWrite(led, !digitalRead(led));

    IrReceiver.resume();
  }
}