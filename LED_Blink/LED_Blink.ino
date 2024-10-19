void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
digitalWrite(LED_BUILTIN, LOW);
pinMode(2, OUTPUT);
digitalWrite(2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
digitalWrite(2, LOW);
delay(1000);
}
