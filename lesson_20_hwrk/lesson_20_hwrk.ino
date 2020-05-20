//almost definitely not best way of implementing this but i refuse to overthink it any further

typedef struct {
    String name;
    byte red;
    byte green;
    byte blue;
} colour;

//vars
int redPin = 3;
int grnPin = 6;
int bluPin = 10;
String inputString;
String prompt = "What colour would you like? ";
int endDelay = 500;
colour foundColour;
int numColours = 9;
int colourIndex;

const colour colours[] {
    {"red",255,0,0}, {"blue",0,0,255}, {"green", 0,255,0},
    {"cyan", 0,255,255}, {"magenta", 255,0,255}, {"yellow",255,255,0},
    {"aqua",0,255,63}, {"orange",255,63,0},{"fuchsia",255,0,63}
};

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
    for (colourIndex = 0; colourIndex < numColours; colourIndex++) {
        if(colours[colourIndex].name == inputString) {
            foundColour = colours[colourIndex];
            break;
        }
    }
    if(colourIndex>=numColours) {
        Serial.println("not found :(");
        analogWrite(redPin,0);
        analogWrite(grnPin,0);
        analogWrite(bluPin,0);
    } else {
        analogWrite(redPin,foundColour.red);
        analogWrite(grnPin,foundColour.green);
        analogWrite(bluPin,foundColour.blue);
    }

    delay(endDelay);
}
