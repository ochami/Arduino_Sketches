int led1 =7;
int led2 =8;
int led3 =9;
int led4 =10;
int ledspeed = 200;
void setup() {
 pinMode(led1,OUTPUT);   //Set pins as output
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
}

void loop() {
 //Turns on each LED at a time (make 5V appear at each pin)
digitalWrite(led1, HIGH);     
delay(ledspeed);
digitalWrite(led2, HIGH);
delay(ledspeed);
digitalWrite(led3, HIGH);
delay(ledspeed);
digitalWrite(led4, HIGH);
delay(ledspeed);

//Turns off the LEDs one at a time then repeats the process
digitalWrite(led1, LOW); 
delay(ledspeed);
digitalWrite(led2, LOW);
delay(ledspeed);
digitalWrite(led3, LOW);
delay(ledspeed);
digitalWrite(led4, LOW);
delay(ledspeed);
}
