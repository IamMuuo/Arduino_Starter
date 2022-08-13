/* S.o.S Flashing program 
 *  Author Erick Muuo
 */

 
const short ledPin = 13; // pin to use for output

void setup() {
  pinMode(ledPin, OUTPUT);  // initialize the pin

}

void loop() {
  flash(200);flash(200);flash(200); // S
  delay(300);
  
  flash(500);flash(500);flash(500); // O
  delay(300);

  flash(200);flash(200);flash(200); // S

  delay(1000);  // Delay for 1s before starting again
}

void flash(const short& duration){
  // flash the led

  digitalWrite(ledPin, HIGH);
  delay(duration);
  digitalWrite(ledPin, LOW);
  delay(duration);
}
