#define LED_RED 11
#define LED_GRN 10
#define LED_BLU 9

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GRN, OUTPUT);
    pinMode(LED_BLU, OUTPUT);
    Serial.begin(115200);
}

void loop() {
}