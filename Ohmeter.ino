
float v1; 
float Rtest;
float Rrefer = 1000; //Reference resistance
void setup() {
  Serial.begin(9600); //Initialize Serial communiction
}

void loop() {
  v1 = analogRead(A0); //Read voltage on Rtest in digital form
  v1 = v1 * (5.0 / 1023.0); //Convert v1 to actual voltage
  Rtest = (5 - v1) * Rrefer / v1; //Calculate unknown resistance

  Serial.print("Resistance = "); //Output to the Serial Monitor
  Serial.print(Rtest);
  Serial.println("ohm");
  delay(1000); //Wait in between readings
}
