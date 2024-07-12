#include "DM.h"

void dm(int Lm, int Rm, int Lm2, int Rm2) {

  if (Lm >= 0) {
    digitalWrite(2, HIGH);  
    digitalWrite(3, LOW);
    analogWrite(9, Lm);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    analogWrite(9, -Lm);
  }
  if (Rm >= 0) {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    analogWrite(10, Rm);
  } else {
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    analogWrite(10, -Rm);
  }


  if (Lm2 >= 0) {
    digitalWrite(6, HIGH);  
    digitalWrite(7, LOW);   
    analogWrite(11, Lm2);
  } else {
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    analogWrite(11, -Lm2);
  }
  if (Rm2 >= 0) {
    digitalWrite(8, HIGH);  
    digitalWrite(9, LOW);   
    analogWrite(12, Rm2);   
  } else {
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    analogWrite(12, -Rm2);
  }
}
