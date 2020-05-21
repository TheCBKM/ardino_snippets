// This code uses 4 NPN transistors to reverse the direction of a DC Motor without using Relays or Motor Driver ICs.
// I'm sorry if you burn your Arduino with this code/circuit, I'm not sure of how secure it is. 
// I'm just starting with Arduino and felt bad about having to buy more components that I didn't have just to do this.
// You are much likely able to do this with a much simpler circuit. Please baffle me with your ingenuity, send me an e-mail with your idea: caulitomaz@gmail.com
// @author Cauli Tomaz, http://www.facebook.com/caulitomaz

 
int antiSwitchP = 8;                // Counter-clockwise transistor, +V 
int antiSwitchN = 9;                // Counter-clockwise transistor, GND

int cwSwitchP = 7;                // Clockwise transistor, +V
int cwSwitchN = 6;                 // Clockwise transistor, GND

void setup() {
   // We are using those pins as OUTPUT, since we are setting it to HIGH to "switch on" a transistor and LOW to "switch it off"
   pinMode(antiSwitchP, OUTPUT);      
   pinMode(antiSwitchN, OUTPUT); 
   pinMode(cwSwitchP, OUTPUT);  
   pinMode(cwSwitchN, OUTPUT); 
}

void loop(){
     digitalWrite(cwSwitchP, LOW);  // guarantee initial state
     digitalWrite(cwSwitchN, LOW);  // guarantee initial state
     
     // Now lets turn the Motor counter-clockwise
     digitalWrite(antiSwitchP, HIGH);  
     digitalWrite(antiSwitchN, HIGH); 
     //delay(1000);
     
    /* // Turn it off
     digitalWrite(antiSwitchP, LOW); 
     digitalWrite(antiSwitchN, LOW); 
     delay(1000);
     
     // Now lets turn the Motor clockwise
     digitalWrite(cwSwitchP, HIGH); 
     digitalWrite(cwSwitchN, HIGH); 
     delay(1000);
     
     // Turn it off
     digitalWrite(cwSwitchP, LOW); 
     digitalWrite(cwSwitchN, LOW);  
     delay(1000);
*/
}

