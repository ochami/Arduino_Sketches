
int buzzerPin = 9; //Take pin 9 and name it buzzerPin
int pirPin = 2; //Take pin 2 and name it pirPin
int sensorValue = 0;  //Integer variable to hold PIR state
int pirState = LOW;   // we start assuming no motion detected
void setup() {
  pinMode(buzzerPin, OUTPUT); //Set up mode of pins
  pinMode(pirPin, INPUT);
}

void loop() {
 sensorValue = digitalRead(pirPin); //Read motion input

  if (sensorValue == 1) {  //If motion detected 
    //tone(pin, frequency, duration)       
    tone(buzzerPin, 2000, 500); //Sound alarm
    delay(800);
    int pirState = HIGH;      
  }
 else {  
      pirState = LOW;    
      noTone(buzzerPin);  //Turn off buzzer
      }
}

