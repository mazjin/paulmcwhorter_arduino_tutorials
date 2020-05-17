int bluPin = 9;
int tick = 0;
int increment = 8;

void setup() {
    pinMode(bluPin, OUTPUT);
}

void loop() {
    analogWrite(bluPin, tick);
    tick = tick + increment;
    if (tick > 255 || tick < 0) {
        increment = increment * -1;
        
        if(tick > 255) {
            tick = 255;
        }
        else if (tick < 0)
        {
            tick = 0;
        }
        
    }
    delay(100);
}