void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ir_1 = digitalRead(9);
  int ir_2 = digitalRead(8);
  int delay_1 = 3000;
  int delay_2 = 2000;

  if (ir_1 == LOW && ir_2 == LOW) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    
  }

  else if (ir_1 == true && ir_2 == false){
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(delay_1);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    delay(delay_2);
  }
  
  else if (ir_1 == false && ir_2 == true){
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    delay(delay_1);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    delay(delay_2);
  }
  
  else{
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
  }
}
