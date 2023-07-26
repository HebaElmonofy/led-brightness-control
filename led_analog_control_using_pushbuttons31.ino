const int BUTTON1 = 10;//Initialize Pin10 with Button1
const int BUTTON2 = 11;//Initialize Pin11 with Button2
const int LED = 9;//Initialize pin9 for LED
int BUTTONstate1 = 0; // To read the button1 state
int BUTTONstate2 = 0;// To read the button2 state

void setup()
{
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED, OUTPUT);

}

void loop()
{
  BUTTONstate1 = digitalRead(BUTTON1);//Read button1 state
  if (BUTTONstate1 == HIGH)
  {
    digitalWrite(LED, HIGH);// Turn LED ON
  } 
  else{
    digitalWrite(LED, LOW);// 
  }
  BUTTONstate2 = digitalRead(BUTTON2);//Read button2 state
  if (BUTTONstate2 == HIGH)
  {
    digitalWrite(LED, LOW); // Turn LED2 OFF
  } 
  else{
    digitalWrite(LED, HIGH); //Turn LED2 ON
  }
 
  
}