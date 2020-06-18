int xPin = A0;
int yPin = A1;
int swPin = 2;
int xVal;
int yVal;
int swVal;
int delayTime = 200;

void setup() {
    Serial.begin(115200);
    pinMode(xPin,INPUT);
    pinMode(yPin,INPUT);
    pinMode(swPin,INPUT_PULLUP);
}

void loop() {
    xVal = analogRead(xPin);
    yVal = analogRead(yPin);
    swVal = digitalRead(swPin);
    delay(delayTime);
    Serial.print("X: ");
    Serial.print(xVal);
    Serial.print(", Y: ");
    Serial.print(yVal);
    Serial.print(", Switch: ");
    Serial.println(swVal);
}