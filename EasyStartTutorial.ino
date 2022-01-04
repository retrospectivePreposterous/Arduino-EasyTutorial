// Buzzer
#include <pitches.h>
#include <Wire.h>

int button = 3; 
int light = 2; 
int val = 0; 


void setup() {
  Serial.begin(9600);
  pinMode(light, OUTPUT);
  pinMode(button, INPUT);
}


void loop() {

  
  /*
  //LED (PIN D2)
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
  //BUZZER (PIN D4)
  tone(4, 200, 200); 
  delay(1000);
  */

  val = digitalRead(button);  
  if (val == LOW) {  //Button pushed
  digitalWrite(light, HIGH);
  tone(4, 200, 200); 
  Serial.println("ENCENDIDO"); 
  }
  if (val == HIGH) { //Button not pushed
  digitalWrite(light, LOW);
  Serial.println("APAGADO");      
  }
}
