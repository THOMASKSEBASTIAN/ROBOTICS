/*
 * make a smart stick that helps the Blind
 */
 #define trigPin  9
 #define echoPin 8

 #define Buzzer1 5
 #define Buzzer2 7


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Buzzer1, OUTPUT);
  pinMode(Buzzer2, OUTPUT);
}


void  loop() {
  Serial.begin(9600);

  long duration, distance;

  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin,  LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  
  
  if (distance<20) {
    digitalWrite(Buzzer1, HIGH);
    delay(2000);
  }
  if (distance<10)  
  {
    digitalWrite(Buzzer1,  HIGH);
    digitalWrite(Buzzer2,  LOW);
    delay(5000);
    digitalWrite(Buzzer1,  LOW);
    digitalWrite(Buzzer2,  LOW);
    delay(2000);
  }
  }

   