#define BUZZER_PIN 11
void setup() {
// put your setup code here, to run once:
pinMode(BUZZER_PIN, OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);
Serial.print(sensorValue);
if(sensorValue >200)
{
analogWrite(BUZZER_PIN, 50);
}
else
{
analogWrite(BUZZER_PIN, 0);
}
delay(1000);
}