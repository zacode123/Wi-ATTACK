#include "debug.h"
#include "cli.h"
#include "scan.h"
#include "attack.h"
#include "eeprom.h"
#include "alias.h"
#include "ap.h"

void setup() {
    cli::begin();
    eeprom::begin();
    alias::load();
}

void loop() {
    cli::update();
    attack::update();
    scan::update();
    ap::update();
}
