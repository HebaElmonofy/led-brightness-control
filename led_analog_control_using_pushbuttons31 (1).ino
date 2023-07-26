int led = 9;
int onbutton = 10;
int offbutton = 11;
int onvalue = 0;
int offvalue = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(onbutton, INPUT);
  pinMode(offbutton, INPUT);
}

void loop() {
  onvalue = digitalRead(onbutton);
  if ( onvalue == LOW )
  {
    digitalWrite(led, HIGH);
  }

  offvalue = digitalRead(offbutton);
  if ( offvalue == LOW )
  {
    digitalWrite(led, LOW);
  }
  }