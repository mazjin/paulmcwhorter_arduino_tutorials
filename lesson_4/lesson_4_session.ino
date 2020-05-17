int redPin = 13;
char pattern [11] = {'.','.','.',' ','-','-','-',' ','.','.','.'};
int i = 0;
int shortDelay = 250;
int longDelay = 500;
int afterDelay = 300;
int endDelay = 2000;

void setup() {
    pinMode(redPin, OUTPUT);
}

void loop(){
    if(pattern[i] == '.') {
        digitalWrite(redPin, HIGH);
        delay(shortDelay);
    }
    else if (pattern[i] == '-') {
        digitalWrite(redPin, HIGH);
        delay(longDelay);
    }
    digitalWrite(redPin, LOW);
    delay(afterDelay);
    i++;
    if (i > 11) {
        i = 0;
        delay(endDelay);
    }
}
