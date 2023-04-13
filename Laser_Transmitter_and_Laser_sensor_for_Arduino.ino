#define DETECT 2
#define ACTION 8


int ena = 11;
int in1 = 4;
int in2 = 10;
int count = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Robojax.com Laser Module Test");
  pinMode(DETECT, INPUT);
  pinMode(ACTION, OUTPUT);

        
    pinMode(ena, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
          

void loop() {

  int detected = digitalRead(DETECT);
 
  if( detected == LOW)
  {
    digitalWrite(ACTION,HIGH);
    Serial.println("Detected!");
          
         digitalWrite(in1,HIGH);
         digitalWrite(in2,LOW);
         analogWrite(ena, 120);       
  }
  
  else{
    count = count + 1;
    digitalWrite(ACTION,LOW);
    Serial.println("No laser");
    digitalWrite(in1,LOW);
         digitalWrite(in2,LOW);
         analogWrite(ena, 120);
         delay(3000);
    
  }

  delay(20);
}
 
