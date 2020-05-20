//vars
int redPin = 3;
int grnPin = 6;
int bluPin = 10;
String inputString;
String prompt = "What colour would you like? ";
int endDelay = 500;

void setup() {
    Serial.begin(115200);
    pinMode(redPin,OUTPUT);
    pinMode(grnPin,OUTPUT);
    pinMode(bluPin,OUTPUT);
}

void loop() {
    Serial.println(prompt);
    while(Serial.available() == 0) {}

    inputString = Serial.readString();
    inputString.toLowerCase();
    inputString.trim();
    if (inputString == "aqua" || inputString == "turquoise") {
        analogWrite(redPin,0);
        analogWrite(grnPin,255);
        analogWrite(bluPin,80);
    } else if(inputString == "red" || inputString  == "r") {
        digitalWrite(redPin,1);
        digitalWrite(grnPin,0);
        digitalWrite(bluPin,0);
    } else if(inputString == "green" || inputString  == "g") {
        digitalWrite(redPin,0);
        digitalWrite(grnPin,1);
        digitalWrite(bluPin,0);
    } else if(inputString == "blue" || inputString == "b") {
        digitalWrite(redPin,0);
        digitalWrite(grnPin,0);
        digitalWrite(bluPin,1);
    } else {
        Serial.println("No valid input :(");
        digitalWrite(redPin,0);
        digitalWrite(grnPin,0);
        digitalWrite(bluPin,0);
    }

    delay(endDelay);
}