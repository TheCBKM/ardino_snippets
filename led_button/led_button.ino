const int ledPin1=13;
const int ledPin2=2;
const int ledPin3=9;

int ib;
void setup(){
  Serial.begin(9600);
pinMode(ledPin1,OUTPUT);
pinMode(ledPin3,OUTPUT);
pinMode(ledPin2,OUTPUT);
}
void loop(){
  if(Serial.available()>0){
    ib=Serial.read();
    if(ib=='Q'){
digitalWrite(ledPin1,HIGH);
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin3,LOW);
    }
    if(ib=='W'){      
digitalWrite(ledPin1,LOW);
digitalWrite(ledPin2,HIGH);
digitalWrite(ledPin3,LOW);
}
if(ib=='E'){
digitalWrite(ledPin1,LOW);
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin3,HIGH);}
}
  }
