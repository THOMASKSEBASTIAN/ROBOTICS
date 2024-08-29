void setup() {
 
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  
  int ir_1 = digitalRead(9);
  int ir_2 = digitalRead(8);
  int delay_1 = 7;
  int delay_2 = 130;

  if (ir_1 == false ) {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
}
