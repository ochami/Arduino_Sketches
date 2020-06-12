
int ledpin = 9;
int buttonpin = 7;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);    //read from this pin
}

void loop()
{
  int button = digitalRead(buttonpin);     // read from the button pin
  if (button==HIGH)
  {
    digitalWrite(ledpin, HIGH);
  } 
  else
  {
    digitalWrite(ledpin, LOW);
  }
}
