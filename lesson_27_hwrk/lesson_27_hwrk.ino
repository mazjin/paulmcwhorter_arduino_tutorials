int ledPin = 8;
int buttonPin = 12;
int readVal = 0;
int ledActive = 0;
// int endDelay = 100;

void setup() {
    // Serial.begin(115200);
    pinMode(ledPin,OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    readVal = digitalRead(buttonPin);
    // Serial.println(readVal);
    if(readVal == 0) {
        while (readVal == 0) {
            readVal = digitalRead(buttonPin);
        }
        ledActive = !ledActive;
        digitalWrite(ledPin,ledActive);
    }
    // delay(endDelay);
}