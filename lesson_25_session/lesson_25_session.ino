int lightPin = A0;
int redPin = 11;
int grnPin = 10;
int lightVal;
int lightThreshold = 500;
// int repeatDelay = 250;

void setup() {
    pinMode(lightPin,INPUT);
    pinMode(redPin,OUTPUT);
    pinMode(grnPin,OUTPUT);
    // Serial.begin(115200);
}

void loop() {
    lightVal = analogRead(lightPin);
    // Serial.println(lightVal);
    if(lightVal>=lightThreshold) {
        digitalWrite(grnPin,1);
        digitalWrite(redPin,0);
    } else {
        digitalWrite(redPin,1);
        digitalWrite(grnPin,0);
    }
    // delay(repeatDelay);
}