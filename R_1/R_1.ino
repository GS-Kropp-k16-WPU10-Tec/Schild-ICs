void setup() {
  pinMode(0, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  if (digitalRead(0)==HIGH) {
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(20, HIGH);
    digitalWrite(21, HIGH);
    digitalWrite(5, HIGH);
    analogWrite(6, 255);
    analogWrite(7, 255);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(20, LOW);
    digitalWrite(21, LOW);
    digitalWrite(5, LOW);
    analogWrite(6, 0);
    analogWrite(7, 0);
  }
}