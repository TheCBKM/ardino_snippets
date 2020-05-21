#include <Keypad.h>
#include <Servo.h>
int sp=13;
int t=1;
char key;
char p[4];
int count=0;
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};
byte rowPins[ROWS] = {2,3,4,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,7,8,9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
Servo sv;
void reset() {
    for(int i=0; i<4; i++) {
        p[i]='0';
        count=0;
    }
}
void setup() {
    sv.attach(sp);
    sv.write(0);
    pinMode(13,OUTPUT);
    Serial.begin(9600);
    sv.write(0);

}

void loop() {
    key = keypad.getKey();

    if (key != NO_KEY) {
      if(key=='#'){clos();}
        if( key=='1'||key=='2'||key=='3'||key=='4') {
            p[count] = key;
            Serial.print(key);
            check();

        }
        else reset();
    }
}
void clos() {

    reset();
    Serial.println("closing");
    if(sv.read()==90)
        for(int j=90; j>=0; j--) {
            sv.write(j);
            delay(t);
        }
}




void check() {
    if(count==3) {
        {   Serial.print(count);
            if(p[0]=='1'&&p[1]=='2'&&p[2]=='3'&&p[3]=='4') {
                Serial.println(p);
                if(sv.read()==0)
                    for(int i=0; i<=90; i++) {
                        sv.write(i);
                        delay(t);
                    }
            }
            else reset();
        }
    }
    else count++;
}








/*
 key = keypad.getKey();

*/
