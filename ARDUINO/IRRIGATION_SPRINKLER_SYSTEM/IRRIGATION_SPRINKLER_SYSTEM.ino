// Define pin connections
const int moistureSensorPin = 5;
const int ledPin = 11;
const int buzzer = 2;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set pin modes
  pinMode(moistureSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
  // Read the moisture sensor value
  int moistureLevel = digitalRead(moistureSensorPin);
  
  // Print the moisture level to the serial monitor
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);
  
  // Check if the soil is dry
  if (moistureLevel==0)
  {
    // Activate buzzer and LED
    digitalWrite(ledPin, LOW);
    Serial.println("Soil is dry!");
  } 
  else 
  {
    // Deactivate buzzer and LED
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Soil is moist.");
  }
  
  // Small delay to avoid serial spamming
  delay(1000);
}
