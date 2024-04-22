   float sensorValue;

void setup() {
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("Gas sensor warming up!");
  delay(20000); // allow the MQ-6 to warm up
  noTone(11);
  
}

void loop() {
  sensorValue=analogRead(A0);
  if(sensorValue > 300)
  {
    Serial.print(" | Smoke detected!");
    tone(11,1000,200);//tone(pin, frequency, duration)
  }
  else
  {
     Serial.print(" | Smoke  not detected!");
  
    noTone(buzzer);
   
  }
  delay(2000); // wait 2s for next reading
}
