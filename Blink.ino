int led = 7;
void setup() {
pinMode(led, OUTPUT);  //Make pin 7 an output
}

void loop() {
digitalWrite(led, HIGH); //Turn on pin 7
delay(1000); //delay 1 second
digitalWrite(led, LOW); //then turn off pin 7
delay(1000);  //delay 1 second before repeating
}
