//VARS
int ledPin = 3;
int upButtonPin = 6;
int downButtonPin = 5;
int upVal;
int downVal;
int ledVal = 0;
int buzzPin = 8;
int ledIncrementSize = 15;
int refreshTime = 100;

void setup() {
    pinMode(upButtonPin, INPUT);
    pinMode(downButtonPin, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(buzzPin, OUTPUT);
}

void loop() {
    upVal = digitalRead(upButtonPin);
    downVal = digitalRead(downButtonPin);

    if(upVal == 0 && downVal == 0) {
        ledVal = 255;
    } else if (upVal == 0 && ledVal < 255)
    {
        ledVal = ledVal + ledIncrementSize;
    } else if (downVal == 0 && ledVal > 0)
    {
        ledVal = ledVal - ledIncrementSize;
    }
    
    analogWrite(ledPin,ledVal);
    if(ledVal == 255) {
        digitalWrite(buzzPin,1);
    } else {
        digitalWrite(buzzPin,0);
    }
    delay(refreshTime);
}
