
#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

void setup() {
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(4);
  //Serial.begin(9600);
}

void loop() {

  int val1 = map(analogRead(A0), 0, 1023, 90, 0);
  int val2 = map(analogRead(A1), 0, 1023, 0, 120);
  int val3 = map(analogRead(A2), 0, 1023, 180, 0);
  int val4 = map(analogRead(A3), 0, 1023, 0, 180);

  servo1.write(val1);
  servo2.write(val2);
  servo3.write(val3);
  servo4.write(val4);

}
