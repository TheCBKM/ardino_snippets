const int buttonPin=2;
const int ledPin=13;
int brightness=0;


void setup(){
 pinMode(ledPin,INPUT);
 pinMode(buttonPin,OUTPUT);
 digitalWrite(ledPin,LOW);
  
}
void loop(){
   
  int reading =digitalRead(buttonPin);
  analogWrite(ledPin,brightness);
  if(reading==HIGH){
    brightness=brightness+45;
    if((brightness>=225)||(brightness<=0)){
      brightness=0;
      }
    }
  }

