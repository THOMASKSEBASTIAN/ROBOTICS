// Define the analog pin for the MQ3 sensor
const int mq3Pin = A0;

// Define the threshold value for alcohol detection
const int threshold = 300;

void setup() {
  // Start the serial communication
  Serial.begin(9600);
  
  // Initialize the analog pin as input
  pinMode(mq3Pin, INPUT);
}

void loop() {
  // Read the analog value from the MQ3 sensor
  int sensorValue = analogRead(mq3Pin);
  
  // Print the sensor value to the serial monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  // Check if the sensor value exceeds the threshold
  if (sensorValue > threshold) {
    Serial.println("Alcohol detected!");
  } else {
    Serial.println("No alcohol detected.");
  }
  
  // Wait for a bit before taking another reading
  delay(1000);
}
