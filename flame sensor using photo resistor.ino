// Define pin numbers for photoresistor and buzzer
const int lightPin = A0;  // Analog pin for photoresistor
const int buzzerPin = 3; // Digital pin for buzzer

// Define threshold for light detection
const int lightThreshold = 500; // Adjust based on sensor calibration

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize buzzer pin as output
  pinMode(buzzerPin, OUTPUT);

  // Turn off the buzzer initially
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read the value from the photoresistor
  int lightValue = analogRead(lightPin);

  // Print the sensor value to the serial monitor
  Serial.print("Light Sensor Value: ");
  Serial.println(lightValue);

  // Check if the light value exceeds the threshold
  if (lightValue > lightThreshold) {
    // Turn on the buzzer
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Turn off the buzzer
    digitalWrite(buzzerPin, LOW);
  }

  // Delay for a short period
  delay(500);
}
