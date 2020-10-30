void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(F("Write something on the Serial Monitor that is stored in FLASH"));
  for (int i = 0; i < 1024; i++) {
    char x = pgm_read_byte(i);
    Serial.print(i);
    Serial.print("    ");
    Serial.println(x);
    delay(10);
  }
}

void loop() {
}
