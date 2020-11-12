#include <ThingerYun.h>

#define USERNAME "*****" // Thinger.io user name here
#define DEVICE_ID "*****" // Device_ID
#define DEVICE_CREDENTIAL "************" // password

ThingerYun thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(9, INPUT);
  // initialize bridge
  Bridge.begin();

  // pin control example (i.e. turning on/off a light, a relay, etc)
  //thing["led"] << digitalPin(LED_BUILTIN);

  // resource output example (i.e. reading a sensor value, a variable, etc)
  thing["sensorvalue"] >> outputValue(analogRead(9));
  // more details at http://docs.thinger.io/arduino/
}

void loop() {
  thing.handle();
}
