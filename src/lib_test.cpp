#include "lib_test.h"

#include <Arduino.h>
#include <ArduinoJson.h>

void test() {
    const char* test_str = "{test:\"success!\"}";
    JsonDocument doc;
    deserializeJson(doc, test_str);
    serializeJsonPretty(doc, Serial);
    Serial.println();
}