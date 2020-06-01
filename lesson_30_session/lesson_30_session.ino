#include <Servo.h>

int servoPin = 9;
int servoPos = 0;
Servo servoObj;

void setup() {
    Serial.begin(115200);
    servoObj.attach(servoPin);
}

void loop() {
    Serial.print("Enter the angle the servo should move to: ");
    while( Serial.available() == 0 ) {}
    servoPos = Serial.parseInt();
    Serial.println(servoPos);
    servoObj.write(servoPos);
}