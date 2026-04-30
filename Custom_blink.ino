const int ledPin = 13;
const int unit = 200;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void dot() { 
  digitalWrite(ledPin, HIGH);
  delay(unit);
  digitalWrite(ledPin, LOW);
  delay(unit);
}

void dash() { 
  digitalWrite(ledPin, HIGH);
  delay(unit * 3);
  digitalWrite(ledPin, LOW);
  delay(unit);
}

void loop() {

   dash();
   dot();
   delay(unit * 2);


   dot();
   dot();
   delay(unit * 2);


   dash();
   dash();
   dot();
   delay(unit * 2);


   dash();
   dash();
   dot();
   delay(unit * 2);


   dot();
   delay(unit * 2);


   dot();
   dash();
   dot();
   delay(unit * 2);


   dot();
   dot();
   dot();
   delay(2000);
}
