#include <SoftwareSerial.h>    
SoftwareSerial BTSerial(7, 6);

#define INa 8
#define INb 9
#define INc 10
#define INd 11
//#define ENA 6
//#define ENB 5
void setup() {
  BTSerial.begin(9600);    
  Serial.begin(9600);      
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  if (BTSerial.available()) { 
    char cmd = (char) BTSerial.read();  
    Serial.println(cmd); 

    if ( cmd == 'f') {       
      digitalWrite(INa, HIGH);
      digitalWrite(INb, LOW);
      digitalWrite(INc, HIGH);
      digitalWrite(INd, LOW);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd == 'l') {    
      digitalWrite(INa, LOW);
      digitalWrite(INb, LOW);
      digitalWrite(INc, HIGH);
      digitalWrite(INd, LOW);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd == 'r') {     
      digitalWrite(INa, HIGH);
      digitalWrite(INb, LOW);
      digitalWrite(INc, LOW);
      digitalWrite(INd, LOW);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd ==  'b') {  
      digitalWrite(INa, LOW);
      digitalWrite(INb, HIGH);
      digitalWrite(INc, LOW);
      digitalWrite(INd, HIGH);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd == 's') {    
      digitalWrite(INa, LOW);
      digitalWrite(INb, LOW);
      digitalWrite(INc, LOW);
      digitalWrite(INd, LOW);
      //analogWrite(ENA,0);
      //analogWrite(ENB,0);
    }
  }
}
