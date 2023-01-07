const int redPin = 9;
const int bluePin = 10;
const int greenPin = 11;
const int buttonPin = 2;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Wait for button press
  while (digitalRead(buttonPin) == HIGH) {}

  // Generate a random number between 0 and 99
  int randNumber = random(100);

  if (randNumber < 15) {
    // 15% chance of landing on red
    digitalWrite(redPin, HIGH);
    delay(1000);
    digitalWrite(redPin, LOW);
  } else if (randNumber < 30) {
    // 15% chance of landing on blue
    digitalWrite(bluePin, HIGH);
    delay(1000);
    digitalWrite(bluePin, LOW);
  } else {
    // 70% chance of landing on green
    digitalWrite(greenPin, HIGH);
    delay(1000);
    digitalWrite(greenPin, LOW);
  }

  // Wait for button release
  while (digitalRead(buttonPin) == LOW) {}
}
