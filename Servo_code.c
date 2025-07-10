#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {
  unsigned long startTime = millis();

  // Sweep motion for 2 seconds
  while (millis() - startTime < 2000) {
    for (int pos = 0; pos <= 180; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(5);
    }
    for (int pos = 180; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(5);
    }
  }

  // Set all motors to 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  // Stop the loop
  while (true);
}