#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);   // Serial Monitor
  BT.begin(9600);       // HC-06 default baud rate
  Serial.println("Send AT commands:");
}

void loop() {
  if (BT.available()) Serial.write(BT.read());
  if (Serial.available()) BT.write(Serial.read());
}
