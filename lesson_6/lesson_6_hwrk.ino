int redPin = 13;
int grePin = 12;
int bluPin = 11;
int yelPin = 10;
int whtPin = 9;
int tick = 0;
int lightOnDelay = 900;
int lightOffDelay = 100;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(grePin, OUTPUT);
    pinMode(bluPin, OUTPUT);
    pinMode(yelPin, OUTPUT);
    pinMode(whtPin, OUTPUT);
}

void loop() {
    if(tick % 32 >= 16) {
        digitalWrite(redPin, HIGH);
    }
    if(tick % 16 >= 8) {
        digitalWrite(grePin, HIGH);
    }
    if(tick % 8 >= 4) {
        digitalWrite(bluPin, HIGH);
    }
    if(tick % 4 >= 2) {
        digitalWrite(yelPin, HIGH);
    }
    if(tick % 2 == 1) {
        digitalWrite(whtPin, HIGH);
    }
    delay(lightOnDelay);
    tick ++;
    digitalWrite(whtPin, LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(grePin,LOW);
    digitalWrite(bluPin,LOW);
    digitalWrite(yelPin,LOW);
    delay(lightOffDelay);
}