#include <Servo.h>
int sp=3;
int t=5;
Servo sv;
void setup(){
  sv.attach(sp);
   sv.write(0);
   pinMode(13,OUTPUT)
}
void loop(){
 
  for(int i=0;i<=180;i++){
  sv.write(i);
  delay(t);
  }
    for(int j=180;j>=0;j--){
    sv.write(j);
      delay(t);

    }
    
}
