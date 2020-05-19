int endDelay = 1000;
String inputString;

// String prompt = "What is your name? ";
// String response1 = "Hello ";
// String response2 = ", welcome to Arduino!";

String prompt = "Would you like a RED (R), BLUE (B) or GREEN (G) light?";
int redPin = 6;
int grnPin = 5;
int bluPin = 3;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(grnPin, OUTPUT);
    pinMode(bluPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println(prompt);
    while(Serial.available() == 0){}
    inputString = Serial.readString();
    inputString.toLowerCase();
    Serial.println();    
    
    //VSCode serial monitor input always uses \n line ending - be careful!
    if(inputString == "red" || inputString  == "r") {
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