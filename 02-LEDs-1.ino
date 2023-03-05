void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH); // Schalte die Spannung an Pin 7 ein (LED AN)
  digitalWrite(8, LOW); // Schalte die Spannung an Pin 8 aus (LED AUS)
  delay(1000);            // Warte 1000 Millisekunden (1 Sekunde)
  digitalWrite(7, LOW); // Schalte die Spannung an Pin 13 ein (LED AN)
  digitalWrite(8, HIGH);  // Schalte die Spannung an Pin 13 aus (LED AUS)
  delay(1000);
}