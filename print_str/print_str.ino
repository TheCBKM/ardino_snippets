#include <LiquidCrystal.h>
 int movcu=0;
 int movcol=0 ;

int contrast=20;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  analogWrite(6,contrast);
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
      lcd.clear();

  
  // Print a message to the LCD.
}

void loop() {
char s;
   if(Serial.available()>0){
  lcd.setCursor(movcu,movcol);
  s=Serial.read();
 
  
if(s>=32 && s<=127)
{
     lcd.print(s);
  
    movcu++;
}
if(movcu>=16){
  if (movcol==0){movcol=1;movcu=0;}
  else if (movcol==1){movcol=0;movcu=0;lcd.clear();}
  }
  }

}

