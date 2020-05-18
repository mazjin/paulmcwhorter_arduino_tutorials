int redPin = 9;
int yelPin = 6;
int redFlashes = 5;
int yelFlashes = 3;
int onDelay = 200;
int offDelay = 100;

void setup() {
    pinMode(yelPin, OUTPUT);
    pinMode(redPin, OUTPUT);
}

void loop() {
    for (int i = 0; i < yelFlashes; i++) {
        digitalWrite(yelPin, 1);
        delay(onDelay);
        digitalWrite(yelPin, 0);
        delay(offDelay);
    }
    for (int i = 0; i < redFlashes; i++) {
        digitalWrite(redPin, 1);
        delay(onDelay);
        digitalWrite(redPin, 0);
        delay(offDelay);
    }
}