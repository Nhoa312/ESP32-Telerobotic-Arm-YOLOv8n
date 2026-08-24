#include "BluetoothSerial.h"
#include <ESP32Servo.h>

BluetoothSerial SerialBT;

//Servos
Servo servos[5];
int pins[5] = {13, 12, 33, 27, 26};

int currentPos[5] = {93, 90, 90, 90, 90};


void moveSmooth(Servo &servo, int current, int target) {

  if (current < target) {
    for (int pos = current; pos <= target; pos++) {
      servo.write(pos);
      delay(2); 
    }
  } else {
    for (int pos = current; pos >= target; pos--) {
      servo.write(pos);
      delay(2);
    }
  }
}

void setup() {
  Serial.begin(115200);

  SerialBT.begin("ESP32_ARM");
  Serial.println("Bluetooth listo");

  for (int i = 0; i < 5; i++) {
    servos[i].setPeriodHertz(50);
    servos[i].attach(pins[i], 500, 2400);
  }

  delay(1000);


  for (int i = 0; i < 5; i++) {
    servos[i].write(90);
  }
}

void loop() {

  if (SerialBT.available()) {

    String data = SerialBT.readStringUntil('\n');
    data.trim();

  
    if (!data.startsWith("S")) return;
    if (data.indexOf(':') == -1) return;

    Serial.println("Recibido: " + data);

    int sep = data.indexOf(':');

    int servoNum = data.substring(1, sep).toInt() - 1;
    int angle = data.substring(sep + 1).toInt();


    if (servoNum == 0) {
      angle = constrain(angle, 93, 120);
    } else {
      angle = constrain(angle, 0, 180);
    }

    if (servoNum >= 0 && servoNum < 5) {

    
      moveSmooth(servos[servoNum], currentPos[servoNum], angle);

      
      currentPos[servoNum] = angle;
    }
  }
}