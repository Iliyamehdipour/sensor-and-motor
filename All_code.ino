//.ino file
#include "Sensor_test2.h"
#include "DM.h"
int ir_values[8];
void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  //___________________Sensor pin
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  //_____________________________ 
}

void loop() {
  int m1;
  int m2;
  int m3;
  int m4;
  if (Serial.available()) {
    for (int i = 0; i < 8; i++) {
      ir_values[i] = result(i);
    }
    for (int i = 0; i < 8; i++) {
      Serial.print("\t");
      Serial.print(ir_values[i]);

    }
    Serial.println();
    m1 = Serial.parseInt();
    m2 = Serial.parseInt();
    m3 = Serial.parseInt();
    m4 = Serial.parseInt();
    dm(m1, m2, m3, m4);
  }
  int l = analogRead(A1);
  int m = analogRead(A2);
  int r = analogRead(A3);
  
  //___________________condition of sensor
  if(m>500){
    dm(0,0,0,0);
  }
  else if (r>500){
    dm(200,-200,200,-200);
  }
  else if (l>500){
    dm(-200,200,-200,200);
  }
  else{
    dm(200,200,200,200);
  }

}
