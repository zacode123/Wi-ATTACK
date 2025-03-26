#pragma once

#include "StringList.h"
#include "MacArr.h"

typedef struct result_filter_t {
    uint16_t         channels;
    SortedStringList ssids;
    MacArr           bssids;
    SortedStringList vendors;
    bool             aps;
    bool             sts;
} result_filter_t;