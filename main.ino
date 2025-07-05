#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Constants
const int piezoPin = A0; // Adjust the pin number as needed
const int threshold = 100; // Adjust the threshold voltage

// Required variables
int prev = 0, stepCount = 0;
unsigned long previousMillis = 0;
const long interval = 1000; // Debounce interval in milliseconds

// Variables for calculating voltage
float v, vout, vin = 7.0; // Assuming a 5V reference voltage

// Initialize the LCD, set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("Footstep Enegy");
  lcd.setCursor(3, 1);
  lcd.print("Generator");
  delay(1500);
  lcd.clear(); 
  lcd.setCursor(0, 0);
  lcd.print("Steps: 0");
  lcd.setCursor(0, 1);
  lcd.print("Voltage: 0V");
}

void loop() {
  unsigned long currentMillis = millis();

  int sensorValue = analogRead(piezoPin);
  // Immediate LED feedback based on pressure
    if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH); // Turn on LED if pressure exceeds threshold
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED otherwise
  }
  // Debounce the sensor reading
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (sensorValue > threshold && prev == 0) {
      stepCount++;
      lcd.setCursor(7, 0);
      lcd.print(stepCount);

      // Calculate voltage (adjust the formula based on your circuit and calibration)
      vout = (sensorValue * vin) / 1023.0;
      lcd.setCursor(9, 1);
      lcd.print(vout, 1); // Display voltage with one decimal place
      lcd.print("V");

      prev = 1;
    } else {
      prev = 0;
    }
  }
}
