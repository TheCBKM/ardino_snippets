const int buttonPin=2;
const int ledPin=13;
int buttonState=0;
void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT); 
      digitalWrite(ledPin,LOW);

}
void loop(){
  buttonState=digitalRead(buttonPin);
      digitalWrite(ledPin,LOW);
    
  if(buttonState==HIGH){
    digitalWrite(ledPin,HIGH);
  }
  else if(buttonState!=HIGH)
{
    digitalWrite(ledPin,LOW);
  
  }


}
