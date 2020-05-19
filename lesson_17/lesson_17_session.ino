//vars
int ledPin = 7;
int potPin = A0;
int delayTime = 100;
int potVal;


void setup(){ 
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    //basically just an if statement when already inside loop?
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(delayTime);
    while (potVal>1000) {
        digitalWrite(ledPin,1);
        potVal = analogRead(potPin);
        Serial.println(potVal);
        delay(delayTime);
    }
    digitalWrite(ledPin,0);
}