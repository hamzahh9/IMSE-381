
 /*
 * Laser Sensor module for Arduino
 * Turns ON a buzzer or you can control a motor or servo or any other action,

 * Watch the video https://youtu.be/h_y1y6eUvIY

 *  * 
Laser Sensor module for Arduino
Written by Ahmad Shamshiri for Robojax.com
on Feb 02, 2018 at 18:24 in Ajax, Ontario, Canada
 * Permission granted to share this code given that this
 * note is kept with the code.
 * Disclaimer: this code is "AS IS" and for educational purpose only.
* This code is "AS IS" without warranty or liability. Free to be used as long as you keep this note intact.* 
 * This code has been download from Robojax.com
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 /*
/*


 */
  // Saser Sensor code for Robojax.com
#define DETECT 2 // pin 2 for  sensor
#define ACTION 8

// pin 8 for action to do someting

int ena = 11;
int in1 = 4;
int in2 = 10;
int count = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Robojax.com Laser Module Test");
  pinMode(DETECT, INPUT);//define detect input pin
  pinMode(ACTION, OUTPUT);//define ACTION output pin

  // Laser sensor code for Robojax.com
        
        pinMode(ena, OUTPUT);
         pinMode(in1, OUTPUT);
         pinMode(in2, OUTPUT);
          
         // digitalWrite(in1,HIGH);
         //digitalWrite(in2,LOW);
        // analogWrite(ena, 30);
        //delay(2000);
}

void loop() {
     // Laser Sensor code for Robojax.com

  int detected = digitalRead(DETECT);// read Laser sensor
 
  if( detected == LOW)
  {
    digitalWrite(ACTION,HIGH);// set the buzzer ON
    Serial.println("Detected!");
          
         digitalWrite(in1,HIGH);
         digitalWrite(in2,LOW);
         analogWrite(ena, 120);       
  }
  
  else{
    count = count + 1;
    digitalWrite(ACTION,LOW); // Set the buzzer OFF
    Serial.println("No laser");
     // Laser Sensor code for Robojax.com
 digitalWrite(in1,LOW);
         digitalWrite(in2,LOW);
         analogWrite(ena, 120);
         delay(3000);
    
  }

  delay(20);
}
 
