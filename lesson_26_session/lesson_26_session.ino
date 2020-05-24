int lightPin = A0;
int buzzPin = 10;
int lightVal;
int buzzPeriod;

void setup() {
    pinMode(lightPin, INPUT);
    pinMode(buzzPin, OUTPUT);
}

void loop() {
    lightVal = analogRead(lightPin);
    /*my implementation without instructions, tone ranges between
    5microseconds and 5 milliseconds for analog voltages between 0 and 1023*/
    // buzzPeriod = (4950./1023.)*lightVal + 50;

    /*implementation as defined later in video, tone between 1 and 10 microsec
    and 200 and 750 analog voltage */
    buzzPeriod = (9./550.)*(lightVal+200) + 1;

    digitalWrite(buzzPin,1);
    delayMicroseconds(buzzPeriod);
    digitalWrite(buzzPin,0);
    delayMicroseconds(buzzPeriod);
}