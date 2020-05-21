const int ds=8;
const int st=9;
const int sh=10;
void setup(){
  pinMode(ds,OUTPUT);
pinMode(st,OUTPUT);
pinMode(sh,OUTPUT);
writereg();

}
boolean reg[8];
void writereg(){
  digitalWrite(st,LOW);
  for(int i=0;i<=7;i++){
    digitalWrite(sh,LOW);
    digitalWrite(ds,reg[i]);
    digitalWrite(sh,HIGH);  
  
  }
  digitalWrite(st,HIGH);
} 

 
void loop(){
  for(int i=0;i<8;i=i+2){
  reg[i]=HIGH;    
  writereg();
  delay(500);
  }
  for(int i=1;i<8;i=i+2){
  reg[i]=HIGH; 
  reg[i-1]=LOW;    
  
  writereg();
  delay(500);
  }
   

  
}
