#include <TinyWireM.h>
#include <Tiny4kOLED.h>

#define pwmPin  3  	// digital PWM pin 9 - SAIDA
#define enPin   4   // habiita sinais PWM

void prepareDisplay() {
  oled.clear();
  oled.begin();
  oled.setFont(FONT6X8);
}

void setup() {
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64br), tiny4koled_init_128x64br);
 // Two fonts are supplied with this library, FONT8X16 and FONT6X8
 // To clear all the memory
    oled.clear();
    oled.on();
    prepareDisplay();
    oled.setFont(FONT8X16);  
}

void loop() {
  float rpm=1234.7;
  // Checks 1 second passed
  if (digitalRead(3) == HIGH){
    // Print to display
    oled.setCursor(48, 0);
    oled.print("ON ");
  }
  else{
    oled.setCursor(48, 2);
    oled.print("OFF");
  }
}