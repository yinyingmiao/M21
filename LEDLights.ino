#include <FastLED.h>
#define LED_PIN 5
#define NUM_LEDS 48

#define LED_EACH 11 //12 - 1 as it starts with a 0

#define TEMPERATURE_1 Tungsten100W
#define TEMPERATURE_2 OvercastSky

// How many seconds to show each temperature before switching
#define DISPLAYTIME 20
// How many seconds to show black between switches
#define BLACKTIME   3

CRGB leds[NUM_LEDS];

int i = 0;

unsigned long CurrentTime;
unsigned long PreviousTime;
unsigned long Delay = 30000;


void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
  FastLED.clear();
  FastLED.show();
  //FastLED.setBrightness(0);
 
}

void loop() {

  if (CurrentTime = PreviousTime + Delay) {

    FastLED.clear();
    LoopLed();

  }
}

void LoopLed() {
  for (i = 0; i < 12; i++) { 
    static uint8_t starthue = 0;
    fill_rainbow(leds, 12, --starthue, 20);

    // Choose which 'color temperature' profile to enable.
    uint8_t secs = (millis() / 1000) % (DISPLAYTIME * 2);
    if( secs < DISPLAYTIME) {
      FastLED.setTemperature( TEMPERATURE_1 ); // first temperature
      leds[0] = TEMPERATURE_1; // show indicator pixel
    } else {
      FastLED.setTemperature( TEMPERATURE_2 ); // second temperature
      leds[0] = TEMPERATURE_2; // show indicator pixel
    }

    // Black out the LEDs for a few secnds between color changes
    // to let the eyes and brains adjust
    if( (secs % DISPLAYTIME) < BLACKTIME) {
      memset8( leds, 0, NUM_LEDS * sizeof(CRGB));
    }
    
    FastLED.show();
    FastLED.delay(300);

}
// colours codes (0-11)
  // cold colours: -- the other way needed
  //brightness code -- the other way needed
  for (i >= 12; i < 24; i++) {

    leds[i] = CRGB (255, 117, 24);
    FastLED.setBrightness(5*(i-12));
    FastLED.show();   
    delay(1000);

  }

  //blink code
  for (i >= 24; i < 36; i++) {
      
      FastLED.setBrightness(50);
      leds[i] = CRGB::Black;
      FastLED.show();
      delay(400);
      leds[i] = CRGB (255, 117, 24);
      FastLED.show();      
      delay(400);
      leds[i] = CRGB::Black;  
      FastLED.show();    
      delay(400);
      leds[i] = CRGB (255, 117, 24);         
      FastLED.show();
      delay(400);              
    }
  
  //hue code

  for (i >= 36; i < 48; i++) { 

      leds[i] = CRGB(3*(i-36), 5*(i-36), 180 + 3*(i-36));
      FastLED.show();
      delay(500);

  }

  for (i <= 48; i >=36; i--) {
      leds[i] = CRGB(180 + 3*(48-i), 3*(48-i), 5*(48-i));
      FastLED.show();
      delay(400);    
  }


  delay(5000);

}

  //FastLED.clear();

  // warm colours:  

//reduce brightness
  // for (i = LED_EACH+12; i>= LED_EACH; i--){
  //   leds[i] = CRGB (255, 223, 186);
  //   FastLED.setBrightness(255-20*i);
  //   FastLED.show();   
  //   delay(1000);
  // }

  // for (i = LED_EACH; i >= 0; i--){
  //   leds[i] = CRGB(180 + 3*i, 3*i, 5*i);
  //   FastLED.show();
  //   delay(200);
  // }


