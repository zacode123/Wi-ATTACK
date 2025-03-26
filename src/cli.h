#pragma once

#include <Arduino.h> // String

namespace cli {
    void begin();
    void parse(const char* input);

    bool available();
    bool read(String& destination, const char* _default = nullptr);
    bool read_exit();

    void update();
}