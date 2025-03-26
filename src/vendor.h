#pragma once

#include <Arduino.h> // String

typedef void (* search_cb_f)(const uint8_t* prefix, const char* name);

namespace vendor {
    void getRandomMac(uint8_t* mac);
    String getName(const uint8_t* mac);
    void getMAC(String name, bool substring, search_cb_f cb);
};