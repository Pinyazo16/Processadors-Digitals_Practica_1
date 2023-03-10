#include <Arduino.h>
int p = 5000;
unsigned long Time = 0;

#ifdef __cplusplus
extern "C" {
#endif
uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif
uint8_t temprature_sens_read();

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (millis() > Time + p){
    Serial.print("Temperature: ");
  
    // Convert raw temperature in F to Celsius degrees
    Serial.print((temprature_sens_read() - 32) / 1.8);
    Serial.println(" C");
    Time = millis();
  }
  
}