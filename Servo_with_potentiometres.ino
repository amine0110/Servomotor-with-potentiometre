#include <Servo.h>
Servo amine1;
Servo amine2;
Servo amine3;
Servo amine4;
int joy1 = 0;
int joy2 = 1;
int joy3 = 2; 
int joy4 = 4;

int pot1;
int pot2;
int pot3;
int pot4;
void setup() {
  amine1.attach(3);
  amine2.attach(5);
  amine3.attach(6);
  amine4.attach(9);

}

void loop() {
  pot1 = analogRead(joy1);
  pot1 = map(pot1, 0, 1023, 0, 180);
  amine1.write(pot1);

  pot2 = analogRead(joy2);
  pot2 = map(pot2, 0, 1023, 0, 180);
  amine2.write(pot2);

  pot3 = analogRead(joy3);
  pot3 = map(pot3, 0, 1023, 0, 180);
  amine3.write(pot3);

  pot4 = analogRead(joy4);
  pot4 = map(pot4, 0, 1023, 0, 180);
  amine4.write(pot4);
}
