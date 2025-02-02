#pragma once
#include "stdio.h"

#define TOUCH_VERSION "0.0.1"

void version(char** x){
    printf("%s", TOUCH_VERSION);
}