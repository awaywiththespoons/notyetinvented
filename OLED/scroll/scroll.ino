
// set up
#include <Arduino.h>
#include <U8x8lib.h>

#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

// constructor
U8X8_SH1107_PIMORONI_128X128_HW_I2C u8x8(U8X8_PIN_NONE);

void setup()
{
  u8x8.begin();
  // set font
  u8x8.setFont(u8x8_font_amstrad_cpc_extended_f);

}


void loop()
{


  for (int i = 0; i < 127; i++) {
    u8x8.clearDisplay();
    u8x8.setCursor(i, 10);
    u8x8.print("Hello scrolly");
  }

}

//  for (int i = 0; i < 127; i++) {
//    u8x8.clearDisplay();
//    u8x8.setFont(u8x8_font_profont29_2x3_f); // see list of fonts
//
//    u8x8.setInverseFont(0);
//    u8x8.setCursor(i, 11);
//    u8x8.print("byeee!");
//  }
