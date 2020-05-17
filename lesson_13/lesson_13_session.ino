int readPin = A2;
float readVoltage = 0;
int readTimer = 500;
int warningLED = 9;

void setup() {
    pinMode(readPin, INPUT);
    pinMode(warningLED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    readVoltage = analogRead(readPin) * 5. / 1023.;
    Serial.println(String(readVoltage) + "V");
    if(readVoltage > 2. && readVoltage < 3.) {
        digitalWrite(warningLED, HIGH);
    } else {
        digitalWrite(warningLED, LOW);
    }
    delay(readTimer);
}