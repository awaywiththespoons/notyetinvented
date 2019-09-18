
// set up
#include <Arduino.h>
#include <U8x8lib.h>


#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

// constructor
U8X8_SH1107_PIMORONI_128X128_HW_I2C u8x8(U8X8_PIN_NONE);

uint8_t tiles[16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
uint8_t tiles1[16] = {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f };

void setup()
{
  u8x8.begin();
}


void loop()
{

  //random dots
  u8x8.drawTile(random(0, 127), random(0, 127), 2, tiles);
  u8x8.drawTile(random(0, 127), random(0, 127), 2, tiles1);

  delay(10);
}
