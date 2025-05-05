#include <AccelStepper.h>

// Define stepper motor for X axis
AccelStepper stepperX(1, 2, 5); // X axis: STEP=2, DIR=5

void setup() {
  Serial.begin(9600);  // Start Serial Monitor for debugging
  
  stepperX.setMaxSpeed(1000);  // Set max speed for X axis
  stepperX.setAcceleration(500); // Set acceleration for X axis
}

void loop() {
  // Move X axis forward 200 steps
  Serial.println("Moving X motor forward...");
  stepperX.moveTo(200);  // Move X axis forward
  while (stepperX.distanceToGo() != 0) {
    stepperX.run();  // Run motor X
  }
  delay(1000); // Wait for 1 second

  // Move X axis back to 0
  Serial.println("Moving X motor back to 0...");
  stepperX.moveTo(0);  // Move X axis back to 0
  while (stepperX.distanceToGo() != 0) {
    stepperX.run();  // Run motor X
  }
  delay(1000); // Wait for 1 second
}
