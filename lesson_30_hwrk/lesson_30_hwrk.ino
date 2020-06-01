#include <Servo.h>

int photoPin = A0;
int photoVal;
int servoPin = 9;
int servoPos = 0;
Servo servoObj;

// int endDelay = 150;

void setup() {
    // Serial.begin(115200);
    servoObj.attach(servoPin);
    pinMode(photoPin,INPUT);
}

void loop() {
    photoVal = analogRead(photoPin);
    // Serial.println(photoVal);

    servoPos = photoVal * (-180./1000.)+180;
    // Serial.println(servoPos);
    servoObj.write(servoPos);
    // delay(endDelay);
}