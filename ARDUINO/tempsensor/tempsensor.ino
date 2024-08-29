float Vout;
float Temp;
void setup() {

  Serial.begin (9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  Vout =analogRead(A0);
  Temp=(Vout*500)/1023;
  if (Temp>=30)
  {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);

  }
  else
  {
    digitalWrite(8,LOW);
     digitalWrite(9,LOW);
  }
  Serial.print("Temperature in Degree Celsius = ");
  Serial.print(Temp);
  Serial.println();
  delay(1000);
}

  

