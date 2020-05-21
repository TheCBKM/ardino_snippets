int numred=10;
int red[numred];
int redi=0;
int t=0;
int avg=0;
int ip=A0;
void setup(){
  Serial.begin(9600);
  for(int i=0li<numred;i++){
  red[i]=0;
  }
}
void loop(){
  t=t-rea[redi];
  redi++;
  if(redi>=numred){
    redi=0;  
  }
  avg=t/numred;
  Serial.println(avg);
  delay(1000);
}
