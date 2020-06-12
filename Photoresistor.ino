
int ledpin = 10; //Set the pin LED is connected to
int ldrpin = A5; //Analog pin LDR is connected
int sensorvalor = 0; //A variable to hold LDR values. Start by assuming 0 before reading

void setup() {
Serial.begin(9600); //Initialize serial communication
pinMode(ledpin, OUTPUT); //Define ledpin mode as output
}

void loop() {
int sensorvalor = analogRead(ldrpin); //Read analog input from pin A5 and hold as sensorvalue
Serial.println(sensorvalor); //Display the sensor value to the Serial Monitor

if (sensorvalor > 800)  //Check if the sensor value is greater than 800
{
digitalWrite(ledpin, HIGH);  //Turn on LED if sensor value is greater than 800
}
else     //Turn off LED if sensor value is below 800
{
digitalWrite(ledpin, LOW);
}
}
