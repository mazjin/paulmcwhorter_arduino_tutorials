int j = 1;
int waitTime = 750;
String prependString = "j = ";
int x = 3;
int y = 7;
int z;
float pi = 3.1412;
float r = 2.;
float area;


void setup() {
    Serial.begin(115200);
}

void loop() {
    // Serial.print(prependString);
    // Serial.println(j);
    // j++;

    // z = x + y;
    // Serial.print(x);
    // Serial.print(" + ");
    // Serial.print(y);
    // Serial.print(" = ");
    // Serial.println(z);

    area= pi*r*r;
    Serial.print("a circle with radius ");
    Serial.print(r);
    Serial.print("m has area ");
    Serial.print(area);
    Serial.println(" m^2.");
    r++;

    delay(waitTime);
}