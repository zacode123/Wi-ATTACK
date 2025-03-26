#pragma once

#include <Arduino.h>

namespace ap {
    void start(String& ssid, String& pswd, bool hidden, uint8_t ch, uint8_t* bssid);
    void stop();
    void pause();
    void resume();
    bool paused();
    void update();
}