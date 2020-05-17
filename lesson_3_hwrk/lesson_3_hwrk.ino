int redPin = 13;
int greenPin = 8;
int bluePin = 2;
int tick = 0;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop(){
        if(tick % 2 == 0) {
            digitalWrite(bluePin, HIGH);
        }
        if(tick % 3 == 0) {
            digitalWrite(greenPin, HIGH);
        }
        if(tick % 5 == 0) {
            digitalWrite(redPin, HIGH);
        }
        delay(800);
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, LOW);
        delay(200);
    tick++;
}
