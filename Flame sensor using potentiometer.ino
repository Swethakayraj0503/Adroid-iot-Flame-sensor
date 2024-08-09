// Define pin numbers for potentiometer and buzzer
const int potPin = A0;  // Analog pin for potentiometer
const int buzzerPin = 3; // Digital pin for buzzer

// Define threshold for potentiometer value
const int potThreshold = 500; // Adjust based on potentiometer position

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize buzzer pin as output
  pinMode(buzzerPin, OUTPUT);

  // Turn off the buzzer initially
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read the value from the potentiometer
  int potValue = analogRead(potPin);

  // Print the sensor value to the serial monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  // Check if the potentiometer value exceeds the threshold
  if (potValue > potThreshold) {
    // Turn on the buzzer
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Turn off the buzzer
    digitalWrite(buzzerPin, LOW);
  }

  // Delay for a short period
  delay(500);
}
