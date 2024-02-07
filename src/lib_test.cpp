#include "lib_test.h"

#include <Arduino.h>
#include <ArduinoJson.h>

void test() {
    const char* test_str = R"({test:"success!"})";
    JsonDocument doc;
    serializeJson(doc, test_str);
    deserializeJson(doc, Serial);
    Serial.println();
}