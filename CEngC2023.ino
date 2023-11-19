#define SERVO1PWM   9
#define SERVO2PWM   6
#include <Servo.h>
#include <AFMotor.h>

int liftAngle;
Servo servo1;
Servo servo2;

void setup() {
  // put your setup code here, to run once:
  liftAngle = 0;
  servo1.attach(10);
  // servo2.attach(SERVO2PWM);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // servo1.write(-liftAngle);
  // servo2.write(liftAngle);
  delay(7000);
  liftAngle = 0;

  servo1.write(liftAngle);
  // servo2.write(liftAngle);

  delay(2000);
  for(int i = 0; i < 20; i++){  
    liftAngle += 5;

    servo1.write(liftAngle);
    // servo2.write(liftAngle);

    delay(500);
  }


}
