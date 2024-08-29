void setup() 
{
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set pin modes
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  // Read the sensor value
  int flameSensorValue = digitalRead(2);
  
  // If fire is detected
  
  if (flameSensorValue == LOW) 
  {
    // Activate buzzer and LED
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    Serial.println("Fire detected!");
  }
  else
  {
    // Deactivate buzzer and LED
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    Serial.println("No fire detected.");
  }
  
 
  delay(100);
}
