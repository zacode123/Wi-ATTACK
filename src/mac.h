#pragma once

#include <stdint.h>  // uint8_t
#include <stdbool.h> // bool

namespace mac {
    const static uint8_t BROADCAST[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

    bool multicast(const uint8_t* mac);
    bool equals(const uint8_t* macA, const uint8_t* macB);

    bool valid(const char* str, unsigned int str_len, unsigned int len = 6);
    void fromStr(const char* str, uint8_t* mac, unsigned int len       = 6);
}