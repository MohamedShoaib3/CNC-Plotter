#include <AccelStepper.h>

// Define stepper motor for Z axis
AccelStepper stepperZ(1, 4, 7); // Z axis: STEP=4, DIR=7

void setup() {
  Serial.begin(9600);  // Start Serial Monitor for debugging
  
  stepperZ.setMaxSpeed(1000);  // Set max speed for Z axis
  stepperZ.setAcceleration(500); // Set acceleration for Z axis
}

void loop() {
  // Move Z axis upward 200 steps
  Serial.println("Moving Z motor up...");
  stepperZ.moveTo(200);  // Move Z axis up
  while (stepperZ.distanceToGo() != 0) {
    stepperZ.run();  // Run motor Z
  }
  delay(1000); // Wait for 1 second

  // Move Z axis back to 0
  Serial.println("Moving Z motor back down...");
  stepperZ.moveTo(0);  // Move Z axis back to 0
  while (stepperZ.distanceToGo() != 0) {
    stepperZ.run();  // Run motor Z
  }
  delay(1000); // Wait for 1 second
}
