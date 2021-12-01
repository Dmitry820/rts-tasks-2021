const int enablePin = 8; 
const int stepPin = 3; 
const int dirPin = 6; 

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  digitalWrite(enablePin, LOW);
}

void loop() {
  digitalWrite(dirPin, HIGH); 
  for (int x = 0; x < 300; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(300);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(300);
}
delay(1000);

digitalWrite(dirPin, LOW);
 for (int x = 0; x < 300; x++) {
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(300);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(300);
}
delay(1000);
digitalWrite(enablePin, HIGH);
delay(1000);
digitalWrite(enablePin, LOW);
}
