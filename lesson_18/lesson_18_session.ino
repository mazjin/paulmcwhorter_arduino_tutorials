// int inputNumber;
float inputNumber;

int endDelay = 1000;

// int ledPin = 7;
// int onTime = 300;
// int offTime = 100;

float pi = 3.141593;

String prompt = "Please enter the radius of the circle: ";
String response1 = "The circle of radius ";
String response2 = "m has area ";
String response3 = "m^2.";


// String prompt = "Please enter number of flashes: ";

// String prompt = "Please enter a number: ";
// String response = "Your number was ";

void setup() {
    // pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println(prompt);
    while (Serial.available()==0) {}

    // inputNumber = Serial.parseInt();
    inputNumber = Serial.parseFloat();

    // Serial.print(response);
    // Serial.println(inputNumber);

    // for (int i=0; i<inputNumber;i++) {
    //     digitalWrite(ledPin,1);
    //     delay(onTime);
    //     digitalWrite(ledPin,0);
    //     delay(offTime);
    // }

    Serial.print(response1);
    Serial.print(inputNumber);
    Serial.print(response2);
    Serial.print(pi*inputNumber*inputNumber);
    Serial.println(response3);

    delay(endDelay);
}