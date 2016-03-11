/*
 * M Xie
 * light some Neopixel lights
 */

#include <Adafruit_NeoPixel.h>
int PIN=6;

/*
 * para 1 = number of pixels
 * para 2 = pin number
 * para 3 = type of pixel
 * NEO_RGB pixels wired as red green blue
 * NEO_GRB pixels wired on green red blue
 * NEO_KHZ400 400kHz (FLORA pixels)
 * NEO_KHZ800 800kHz (High density LED pixels)
 */
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12,PIN,NEO_GRB + NEO_KHZ800);

 
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show(); //make pixels all off
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<strip.numPixels();i++) {
    strip.setPixelColor(i,strip.Color(100,0,5*i));
    strip.show();
    delay(500);
    strip.setPixelColor(i,strip.Color(0,0,0));
    strip.show();
  }
  /*
  strip.setPixelColor(0,strip.Color(200,0,0));
  strip.show();
  delay(500);
  */

}
