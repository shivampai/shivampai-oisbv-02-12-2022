
// Fill-in information from your Blynk Template here


#define BLYNK_TEMPLATE_ID "TMPL5CAuowxM"
#define BLYNK_DEVICE_NAME "LED"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG
#include "BlynkEdgent.h"

#define APP_DEBUG
BLYNK_WRITE(V0){
  int pinValue = param.asInt();
  digitalWrite(15,pinValue);
}
// Uncomment your board, or configure a custom board in Settings.h
//
#define USE_WROVER_BOARD
//#define USE_TTGO_T7
//#define USE_ESP32C3_DEV_MODULE
//#define USE_ESP32S2_DEV_KIT

void setup()
{
  
  pinMode(15,OUTPUT);
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
