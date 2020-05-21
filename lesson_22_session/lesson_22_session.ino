// String prompt = "Please input a number: ";
int inputNum;
int buzzPin = 8;
int readPin = A0;
// int buzzLength = 2000;
int readDelay = 200;

void setup() {
    Serial.begin(115200);
    pinMode(readPin, INPUT);
    pinMode(buzzPin, OUTPUT);
}

// void loop() {
//     Serial.println(prompt);
//     while (Serial.available() == 0) {}

//     inputNum = Serial.parseInt();
//     if (inputNum > 10) {
//         digitalWrite(buzzPin,1);
//         delay(buzzLength);
//         digitalWrite(buzzPin,0);
//     }
// }

void loop() {
    inputNum = analogRead(readPin);
    Serial.println(inputNum);
    if (inputNum > 1000) {
        digitalWrite(buzzPin,1);
    } else {
        digitalWrite(buzzPin,0);
    }
    delay(readDelay);
}