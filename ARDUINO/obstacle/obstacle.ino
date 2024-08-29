int trigPin = 3;
int echoPin = 2;


long duration, distance;
void setup() {

Serial.begin(9600);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

pinMode(12, OUTPUT);
pinMode(13, OUTPUT);  

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

}

  void loop() {

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
duration = pulseIn(echoPin, HIGH);
distance = duration / 58.2;
Serial.println(distance );
delay(10);

 if (distance < 10)
{
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
delay(400);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(12, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
digitalWrite(13, HIGH);
delay(70);
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(12, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
digitalWrite(13, HIGH);
delay(70);

}

if (distance >10)
{

digitalWrite(8,HIGH );
digitalWrite(9,LOW );
digitalWrite(12, HIGH);
digitalWrite(10,HIGH );
digitalWrite(11, LOW);
digitalWrite(13, HIGH);
delay(70);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(13, LOW);
delay(400);

 }

}
