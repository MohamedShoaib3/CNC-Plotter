
#include <AccelStepper.h>
#include <Servo.h>

// Define stepper motors for X and Y axes according to CNC Shield
AccelStepper stepperX(1, 2, 5); // X axis: STEP=2, DIR=5
AccelStepper stepperY(1, 3, 6); // Y axis: STEP=3, DIR=6
// If you want to test Z axis as well: AccelStepper stepperZ(1, 4, 7);

Servo penServo;

void setup() {
  stepperX.setMaxSpeed(1000);  // Set max speed for X axis
  stepperY.setMaxSpeed(1000);  // Set max speed for Y axis

  penServo.attach(11); // Attach servo to pin D11
  penServo.write(90);  // Raise pen
  delay(1000);         // Wait for 1 second
}

void loop() {
  // Lower the pen
  penServo.write(30);
  delay(500);  // Wait for 0.5 seconds

  // Move motors to draw a line
  stepperX.moveTo(200); // Move X axis
  stepperY.moveTo(200); // Move Y axis

  while (stepperX.distanceToGo() != 0 || stepperY.distanceToGo() != 0) {
    stepperX.run();  // Run X motor
    stepperY.run();  // Run Y motor
  }

  delay(500); // Wait for 0.5 seconds

  // Raise the pen
  penServo.write(90);
  delay(500); // Wait for 0.5 seconds

  // Return motors to the starting position
  stepperX.moveTo(0); // Move X axis back to 0
  stepperY.moveTo(0); // Move Y axis back to 0

  while (stepperX.distanceToGo() != 0 || stepperY.distanceToGo() != 0) {
    stepperX.run();  // Run X motor
    stepperY.run();  // Run Y motor
  }

  delay(1000); // Wait for 1 second before starting again
}
