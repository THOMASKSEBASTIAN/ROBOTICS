#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RTClib.h>

// Initialize the LCD display with I2C address 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Initialize the RTC module
RTC_DS3231 rtc;

// Relay pin
const int relayPin = 7;

// Set desired time for the relay to turn ON (adjust as needed)
int onHour = 17;   // 5:00 PM
int onMinute = 00;

// Set desired time for the relay to turn OFF (adjust as needed)
int offHour = 17;   // 5:00 PM
int offMinute = 02;

bool setInitialTime = true;  // Set to true to allow manual time entry

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Initialize the LCD
  lcd.init();       // Use init() instead of begin()
  lcd.backlight();  // Turn on the backlight

  // Initialize the RTC
  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    lcd.setCursor(0, 0);
    lcd.print("RTC not found!");
    while (1); // Stop execution if the RTC is not found
  }

  // Allow for manual time setting once
  if (setInitialTime) {
    // Set initial time manually (for example: August 9, 2024, 12:00:00)
    rtc.adjust(DateTime(2024, 8, 17, 16, 55, 0));  // Change this to your initial time
    lcd.setCursor(0, 0);
    lcd.print("Time Set");
    delay(2000);  // Wait for 2 seconds
    lcd.clear();

    setInitialTime = false;  // Once the time is set, change to false (you can comment this line in future uploads)
  }

  // Initialize relay pin as OUTPUT
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Turn relay off by default

  lcd.setCursor(0, 0);
  lcd.print("RTC Timer Ready");
  delay(2000);  // Wait for 2 seconds
  lcd.clear();
}

void loop() {
  // Get the current time from the RTC
  DateTime now = rtc.now();

  // Display the current time on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Time: ");
  lcd.print(now.hour());
  lcd.print(":");
  if (now.minute() < 10) {
    lcd.print("0");  // Leading zero for minutes < 10
  }
  lcd.print(now.minute());

  // Check if it's time to turn the relay ON or OFF
  if ((now.hour() == onHour && now.minute() == onMinute) || (now.hour() > onHour && now.hour() < offHour)) {
    digitalWrite(relayPin, HIGH);  // Turn relay ON
    lcd.setCursor(0, 1);
    lcd.print("Relay ON ");
  } else if (now.hour() == offHour && now.minute() == offMinute) {
    digitalWrite(relayPin, LOW);  // Turn relay OFF
    lcd.setCursor(0, 1);
    lcd.print("Relay OFF");
  } else if (now.hour() > offHour && now.hour() < onHour) {
    digitalWrite(relayPin, LOW);  // Turn relay OFF outside active hours
    lcd.setCursor(0, 1);
    lcd.print("Relay OFF");
  }

  delay(1000);  // Refresh every second
}
