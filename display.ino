// This sketch is just to test the lcd display
// Once the 'Hello World' works, implement logic in the  loop() of the main file
// to print temperature and humidity values, messages, etc.


// Include the Arduino-LiquidCrystal-I2C-library-master library

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x3F for a 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x27, 16, 2);
LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup()
{
  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Hello, world!");
}

void loop()
{
  // Do nothing here...
}
