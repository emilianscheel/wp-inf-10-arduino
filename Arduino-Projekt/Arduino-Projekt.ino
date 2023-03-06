// C++ code
//

const int BUTTON_PIN = 7; // Taster ist auf dem digitalen Pin 7
const int LED1_PIN = 2; // LED ist auf dem digitalen Pin 2 

int buttonState = 1; // Aktueller Zustand des Tasters




void setup() {
 pinMode(BUTTON_PIN, INPUT); // Initialisiere den Taster-Pin als Eingang
 pinMode(LED1_PIN, OUTPUT); // Initialisiere den LED-Pin als Ausgang
 digitalWrite(LED1_PIN, LOW); //LED ausschalten

}

void loop() {
 if (digitalRead(BUTTON_PIN)==HIGH) //überprüft ob der Taster gedrückt wird
    if (buttonState == 1) { // überprüft, ob der Taster aus ist
      digitalWrite(LED1_PIN, HIGH); // LED1 einschalten
      delay(500);// Warten, dasss die LED angeht 
      buttonState = 2; // Setzt den aktuellen Status des Tasters auf an
    }
 else {
 	  digitalWrite(LED1_PIN, LOW); // LED1 ausschalten
    delay(500); // Warten, dasss die LED ausgeht
    buttonState = 1; // setzt den aktuellen Status des Tasters auf aus
 }
}