#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "SmawiKmb7SDY8ido8DIZEvrRH01iVzwv";
char ssid[] = "D-Link_DIR";
char pass[] = "abcde1234";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
