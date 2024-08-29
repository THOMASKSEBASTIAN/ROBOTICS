#include <Servo.h>
int pos = 0; 
int Delay=35;
// Create servo objects for 6 servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// Define the pins for the servos
const int servoPin1 = 2;
const int servoPin2 = 3;
const int servoPin3 = 4;
const int servoPin4 = 5;
const int servoPin5 = 6;
const int servoPin6 = 7;

void setup() {
  // Attach the servo objects to the pins
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  servo6.attach(servoPin6);


  servo1.write(0);
  servo2.write(30); 
  servo3.write(140); 
  servo4.write(0); 
  servo5.write(0); 
  servo6.write(0);  



}

void loop() {

//  SERVO1
for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 90; pos >= 0; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

//SERVO2
for (pos = 30; pos <= 50; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 50; pos >= 30; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

//SERVO3


  for (pos = 140; pos >= 50; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 50; pos <= 140; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

////SERVO4


  for (pos = 0; pos <= 50; pos += 1) 
  { // goes from 180 degrees to 0 degrees
    servo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 50; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(Delay);                       // waits 15ms for the servo to reach the position
  }

//  SERVO5
for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo5.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 90; pos >= 0; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo5.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

  //SERVO6
for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo6.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 90; pos >= 0; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo6.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

}
