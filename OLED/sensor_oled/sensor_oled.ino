
// set up
#include <Arduino.h>
#include <U8x8lib.h>

#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

// threshold
int threshold = 200;

// constructor
U8X8_SH1107_PIMORONI_128X128_HW_I2C u8x8(U8X8_PIN_NONE);

void setup()
{
  u8x8.begin();
  Serial.begin(9600);

}


void loop()
{

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);

  // print out the value you read:
  Serial.println(sensorValue);

  if (sensorValue > threshold) {
   // u8x8.clearDisplay();
    u8x8.setFont(u8x8_font_chroma48medium8_r);
    u8x8.draw2x2String(0, 38, "           ");
    u8x8.draw2x2String(5, 40, "OUCH!!!");
    u8x8.draw2x2String(0, 42, "           ");
  }

  else {
    u8x8.setFont(u8x8_font_chroma48medium8_r);
    u8x8.draw2x2String(random(0, 128), random(0, 128), "*");
  }
  delay(1);

}
