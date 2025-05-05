#include <Servo.h>

// Define servo motor for pen up/down
Servo penServo;

void setup() {
  Serial.begin(9600);  // Start Serial Monitor for debugging
  
  penServo.attach(11); // Attach servo to pin D11
  penServo.write(90);  // Raise pen to start position
  delay(1000);         // Wait for 1 second
}

void loop() {
  // Lower pen
  Serial.println("Lowering pen...");
  penServo.write(30);  // Lower pen
  delay(1000);  // Wait for 1 second
  
  // Raise pen
  Serial.println("Raising pen...");
  penServo.write(90);  // Raise pen
  delay(1000);  // Wait for 1 second
}
