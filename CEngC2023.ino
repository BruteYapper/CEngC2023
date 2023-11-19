#include <Servo.h>
#include <AFMotor.h>

const int serPin1 = 9;
const int serPin2 = 10;


int liftAngle;
unsigned int currentTime;
unsigned int time;

Servo serv1;
Servo serv2;

AF_DCMotor motor(1, MOTOR12_8KHZ);

void setup() {
  serv1.attach(serPin1);
  serv2.attach(serPin2);
  motor.setSpeed(255);
  liftAngle = 85;
  time = millis() + 2700;
  Serial.begin(9600);
}

void loop() {
  // Serial.print(currentTime);
  // Serial.print("\n");
  // Serial.print(time);
  // Serial.print("\n");
  currentTime = millis();
  if (currentTime >= time){
    motor.run(RELEASE);
    serv1.write(0);
    serv2.write(0);  
  } else{
    motor.run(FORWARD);
    serv1.write(liftAngle);
    serv2.write(liftAngle);
    
  }
}
