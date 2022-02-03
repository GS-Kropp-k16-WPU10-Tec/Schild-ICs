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
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  val = digitalRead(0);
  digitalWrite(1, val);
  digitalWrite(2, val);
  digitalWrite(3, val);
  digitalWrite(4, val);
  digitalWrite(20, val);
  digitalWrite(21, val);
  digitalWrite(5, val);
  digitalWrite(6, val);
  digitalWrite(7, val);
  digitalWrite(8, val);
  digitalWrite(9, val);
  digitalWrite(10, val);
  digitalWrite(11, val);
  digitalWrite(12, val);
  digitalWrite(13, val);
  digitalWrite(14, val);
  digitalWrite(15, val);
  delay(21000);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(20, LOW);
  digitalWrite(21, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
}
