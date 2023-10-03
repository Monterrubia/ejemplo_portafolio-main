
/*      ATTINY85                            Out/10/2022          Esdras Silva
    Programa Display de Temperatura NTC100K a 25C 
     oled.setFont(FONT6X8);
     oled.setFontX2(FONT6X8);
     oled.setFont(FONT8X16);
     oled.setFont(FONT8X16);
 */

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
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64br), tiny4koled_init_128x64br);//oled.setRotation(0);
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
  if (digitalRead(3)==HIGH) {
      // Print to display
      oled.setCursor(48, 0);
      oled.print("ON ");
    }
    else{
      oled.setCursor(48, 0);
      oled.print("OFF");
    }
  }

  