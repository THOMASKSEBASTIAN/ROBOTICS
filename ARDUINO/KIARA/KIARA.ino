// Motor A
const int motorA_ENA = 5;
const int motorA_IN1 = 6;
const int motorA_IN2 = 7;

// Motor B
const int motorB_ENB = 10;
const int motorB_IN3 = 8;
const int motorB_IN4 = 9;

char command;

void setup() {
  // Set all motor control pins to output
  pinMode(motorA_ENA, OUTPUT);
  pinMode(motorA_IN1, OUTPUT);
  pinMode(motorA_IN2, OUTPUT);
  pinMode(motorB_ENB, OUTPUT);
  pinMode(motorB_IN3, OUTPUT);
  pinMode(motorB_IN4, OUTPUT);

  // Initialize serial communication for Bluetooth module
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();

    switch (command) {
      case 'F': // Move forward
        digitalWrite(motorA_IN1, HIGH);
        digitalWrite(motorA_IN2, LOW);
        digitalWrite(motorB_IN3, HIGH);
        digitalWrite(motorB_IN4, LOW);
        analogWrite(motorA_ENA, 255);
        analogWrite(motorB_ENB, 255);
        break;
      case 'B': // Move backward
        digitalWrite(motorA_IN1, LOW);
        digitalWrite(motorA_IN2, HIGH);
        digitalWrite(motorB_IN3, LOW);
        digitalWrite(motorB_IN4, HIGH);
        analogWrite(motorA_ENA, 255);
        analogWrite(motorB_ENB, 255);
        break;
      case 'L': // Turn left
        digitalWrite(motorA_IN1, LOW);
        digitalWrite(motorA_IN2, HIGH);
        digitalWrite(motorB_IN3, HIGH);
        digitalWrite(motorB_IN4, LOW);
        analogWrite(motorA_ENA, 255);
        analogWrite(motorB_ENB, 255);
        break;
      case 'R': // Turn right
        digitalWrite(motorA_IN1, HIGH);
        digitalWrite(motorA_IN2, LOW);
        digitalWrite(motorB_IN3, LOW);
        digitalWrite(motorB_IN4, HIGH);
        analogWrite(motorA_ENA, 255);
        analogWrite(motorB_ENB, 255);
        break;
      case 'S': // Stop
        digitalWrite(motorA_IN1, LOW);
        digitalWrite(motorA_IN2, LOW);
        digitalWrite(motorB_IN3, LOW);
        digitalWrite(motorB_IN4, LOW);
        analogWrite(motorA_ENA, 0);
        analogWrite(motorB_ENB, 0);
        break;
    }
  }
}
