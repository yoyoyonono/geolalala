#define LED_RED 11
#define LED_GRN 10
#define LED_BLU 9
#define SENSOR A0

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GRN, OUTPUT);
    pinMode(LED_BLU, OUTPUT);
    Serial.begin(115200);
}

void loop() {
  float sum = 0
  for (int i = 0; i < 1000; i++) {
    sum += analogRead(SENSOR);
  }

  float average = sum/1000;
  Serial.println(average);
}