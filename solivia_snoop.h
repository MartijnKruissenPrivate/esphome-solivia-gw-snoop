#include "esphome.h"
#include "dsmr.h"

using namespace esphome;


class CustomSoliviaSnoopComponent : public Component, public uart::UARTDevice {
    public void setup() override {
        ESP_LOGD("CustomSoliviaSnoopComponent","Setup");
    }
    

  
  void loop() override {
    ESP_LOGD("CustomSoliviaSnoopComponent","Loop");
    delay(5000);
  }	

};