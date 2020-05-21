int buzzPin = 8;
int delay1 = 1;
int delay2 = 2;

void setup() {
    pinMode(buzzPin, OUTPUT);
}
void loop() {
    for (int j=1;j<=100;j++) {
        digitalWrite(buzzPin,1);
        delay(delay1);
        digitalWrite(buzzPin,0);
        delay(delay1);
    }

    for(int j=1;j<=100;j++) {
        digitalWrite(buzzPin,1);
        delay(delay2);
        digitalWrite(buzzPin,0);
        delay(delay2);
    }
}