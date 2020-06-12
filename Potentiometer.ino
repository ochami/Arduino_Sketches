
int potpin = A0;  //select the input pin for the potentiometer
int ledpin = 3;  //select the pin for the LED
int val = 0;  //variable to store the value coming from the sensor. Make it 0 initially.

void setup() {
  pinMode(ledpin, OUTPUT);  //declare the ledpin as an OUTPUT
  Serial.begin(9600); //initialize serial communication at given data transfer rate.
}

void loop() {
  val = analogRead(potpin); //read the value from the sensor
  digitalWrite(ledpin, HIGH);  //turn the ledpin on
  delay(val);                  //stop the program for some time
  digitalWrite(ledpin, LOW); //turn the ledpin off
  delay(val); //stop the program for some time
  Serial.println(val); //display pot value on serial monitor
}
