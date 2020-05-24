int buzzPin = 8;
int readPin = A5;
int tonePeriod;
int readVal;


void setup() {
    // Serial.begin(115200);
    pinMode(readPin, INPUT);
    pinMode(buzzPin, OUTPUT);
}

void loop() {
    // digitalWrite(buzzPin, 1);
    // delayMicroseconds(tonePeriod);
    // digitalWrite(buzzPin,0);
    // delayMicroseconds(tonePeriod);

    readVal = analogRead(readPin);
    tonePeriod = int((readVal*(9940./1023.))+60);
    // Serial.println(tonePeriod);
    
    if(readVal == 1023) {
        digitalWrite(buzzPin,0);
        delayMicroseconds(tonePeriod*2);
    } else {
        digitalWrite(buzzPin,1);
        delayMicroseconds(tonePeriod);
        digitalWrite(buzzPin,0);
        delayMicroseconds(tonePeriod);
    }
}