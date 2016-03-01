void setup() {
  Serial.begin(115200);
  delay(10);
}

void loop() {
  delay(1000);
  int val = analogRead(A0);
  Serial.println(String(val));
}
