#include <A4988.h>

const int MOTOR_STEPS = 400;
const int DIR  =  8;
const int STEP =  9;

// rpm = speed
float rpm      = 80;
int microsteps = 30;

// rotation < 0 => motor(-)
int rotation   = -360 * 80;

A4988 stepper(MOTOR_STEPS, DIR, STEP);

void setup() {
  stepper.begin(rpm, microsteps);
}

void loop() {
  // 360 * N (motor)
  stepper.rotate(rotation);
  
  // exit the loop 
  exit(0);  //0 is required to prevent error.
}
