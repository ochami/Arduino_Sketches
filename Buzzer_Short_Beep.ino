
int buzzerPin = 9; //Pin buzzer connected to
int buttonPin = 2; //Pin push-button connected to
int buttonState = 0;  //Start by assuming no button press
void setup() {
 pinMode(buzzerPin, OUTPUT);  //Set buzzer pin 9 as an output
 pinMode(buttonPin, INPUT); //Set push-button pin 2 as an input
}

void loop() {
  buttonState = digitalRead(buttonPin); //Read push-button state
 //Check if button is pressed and beep at 2kHz for 500ms 
   if(buttonState == HIGH){
  //tone(pin, frequency, duration)       
   tone(buzzerPin, 2000, 500);
   delay(800); //Delay between beeps 
  }
else{
  noTone(buzzerPin); //Stop sound if button is released
}
}
