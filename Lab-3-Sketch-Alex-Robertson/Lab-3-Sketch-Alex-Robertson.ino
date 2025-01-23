void setup() {
  // Analog pin 6 (Light Sensor)
  pinMode(A6, INPUT);
  // Digital pin 4
  pinMode(4, OUTPUT);
  // Sets pin 4 to be off by default
  digitalWrite(4, LOW);

  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);

  if (lightLevel < 100) {
      Serial.println(lightLevel);
      Serial.println("It's really dark!");
      // Sets digital pin 4 to be on
      digitalWrite(4, HIGH);
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
