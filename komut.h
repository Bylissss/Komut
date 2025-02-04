/*Copyright 2025 Ercan Türkyılmaz

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.*/

#pragma once
#include "stdint.h"

#define KOMUT_VERSION_STR "0.0.2"

enum komut_opt_flags{
    PREFIX_NONE = 0b00000000,
    PREFIX_UNIX = 0b00000001,
    EQUAL_SING  = 0b00000010,
}komut_opt_flags;

typedef struct komut_opt{
    struct opt* subopt;
    uint8_t     flags;
    char*       long_name;
    char*       short_name;
    const char* help_string;
    const char* description;
}komut_opt;

komut_opt create_komut_opt(){

}

void komut_init(int argc, char** argv, komut_opt opts[], void(*no_args)()){
    if(argc < 2){
        no_args();
        return;
    }

    for(int i = 1; argc > i; i++){
        printf("%s\n",argv[i][1]);
    }

}