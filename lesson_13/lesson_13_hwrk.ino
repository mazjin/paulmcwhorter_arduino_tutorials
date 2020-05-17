int readPin = A2;
float readVoltage;
int readTimer = 500;
int redLED = 9;
int yelLED = 10;
int grnLED = 11;

void setup() {
    pinMode(readPin, INPUT);
    pinMode(redLED, OUTPUT);
    pinMode(yelLED, OUTPUT);
    pinMode(grnLED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    readVoltage = analogRead(readPin) * 5. / 1023.;
    Serial.println(String(readVoltage) + "V");
    if(readVoltage > 4.) {
        digitalWrite(redLED, 1);
        digitalWrite(yelLED, 0);
        digitalWrite(grnLED, 0);
    } else if(readVoltage > 3.) {
        digitalWrite(redLED, 0);
        digitalWrite(yelLED, 1);
        digitalWrite(grnLED, 0);
    } else {
        digitalWrite(redLED, 0);
        digitalWrite(yelLED, 0);
        digitalWrite(grnLED, 1);
    }
    delay(readTimer);
}