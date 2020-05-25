int ledPin = 8;
int buttonPin = 12;
int readVal;
int endDelay = 100;

void setup() {
    Serial.begin(115200);
    pinMode(ledPin,OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    readVal = digitalRead(buttonPin);
    Serial.println(readVal);
    digitalWrite(ledPin, !readVal);
    delay(endDelay);
}