#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1); // turn off LED.
    delay(100);
    digitalWrite(PIN_LED, 0); // turn on LED.
    delay(100);
    }
  digitalWrite(PIN_LED, 1);
  while(1) {}
}
