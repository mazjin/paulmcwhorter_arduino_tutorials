//vars
int potPin = A3;
int ledPin = 6;
int potVal;
float ledVal;


void setup() {
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    potVal = analogRead(potPin);
    ledVal = (255./1023.) * potVal;
    analogWrite(ledPin,ledVal);
    Serial.print("Potential read as ");
    Serial.print(potVal);
    Serial.print(" (");
    Serial.print(potVal*5./1023.);
    Serial.print("V), so outputting LED at ");
    Serial.println(ledVal);
    delay(300);
}