
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
//set curser
//u8x8.clear();

  
  u8x8.setCursor(0, 1);
  u8x8.print("Hello");
  u8x8.setCursor(0, 3);
  u8x8.print("World!");


}
