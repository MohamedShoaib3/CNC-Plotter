#include <AccelStepper.h>

// Define stepper motor for Y axis
AccelStepper stepperY(1, 3, 6); // Y axis: STEP=3, DIR=6

void setup() {
  Serial.begin(9600);  // Start Serial Monitor for debugging
  
  stepperY.setMaxSpeed(1000);  // Set max speed for Y axis
  stepperY.setAcceleration(500); // Set acceleration for Y axis
}

void loop() {
  // Move Y axis forward 200 steps
  Serial.println("Moving Y motor forward...");
  stepperY.moveTo(200);  // Move Y axis forward
  while (stepperY.distanceToGo() != 0) {
    stepperY.run();  // Run motor Y
  }
  delay(1000); // Wait for 1 second

  // Move Y axis back to 0
  Serial.println("Moving Y motor back to 0...");
  stepperY.moveTo(0);  // Move Y axis back to 0
  while (stepperY.distanceToGo() != 0) {
    stepperY.run();  // Run motor Y
  }
  delay(1000); // Wait for 1 second
}
