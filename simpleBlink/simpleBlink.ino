// simpleBlink.ino
// 改用 GPIO2 控制 LED

const int ledPin = 2; // GPIO2

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED on
  delay(1000);
  digitalWrite(ledPin, LOW);  // LED off
  delay(1000);
}
