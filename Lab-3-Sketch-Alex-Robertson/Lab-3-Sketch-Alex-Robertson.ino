void setup() {
  pinMode(A6, INPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);

  if (lightLevel < 100) {
      Serial.println(lightLevel);
      Serial.println("It's really dark!");
    } else if (lightLevel < 200) {
      Serial.println(lightLevel);
      Serial.println("It's dim in here.");
    } else if (lightLevel < 700) {
      Serial.println(lightLevel);
      Serial.println("It's a little bright.");
    } else if (lightLevel < 1024) {
      Serial.println(lightLevel);
      Serial.println("It's really bright!");
    }
}

void loop() {
  

}
