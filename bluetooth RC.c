#include <SoftwareSerial.h>    
SoftwareSerial BTSerial(7, 6);

#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
#define ENA 3
#define ENB 5

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
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd == 'l') {    
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd == 'r') {     
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd ==  'b') {  
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      //analogWrite(ENA,200);
      //analogWrite(ENB,200);
      
    } else if (cmd == 's') {    
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      //analogWrite(ENA,0);
      //analogWrite(ENB,0);
    }
  }
}
