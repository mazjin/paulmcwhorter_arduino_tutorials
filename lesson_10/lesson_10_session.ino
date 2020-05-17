int readPin = A3;
float readVoltage = 0;
int readTimer = 500;

void setup() {
    pinMode(readPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    readVoltage = analogRead(readPin) * 5. / 1023.;
    Serial.println(String(readVoltage) + "V");
    delay(readTimer);
}