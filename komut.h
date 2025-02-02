#pragma once
#include "stdarg.h"
#include "stdbool.h"

    #define NONE 0
    #define LINUX 1
#ifdef _WIN32
    #define DOS 2
#endif

typedef struct arg;

typedef struct arg{
    struct arg* sub_arg;
    int         prefix;
    const char* short_name;
    const char* long_name;
    void        (*callback_func)(char**);
    const char* help_str;
    bool        equel_sign;
}arg;

extern arg* komut_arg_init();

arg komut_create_arg(arg* sb_arg, int prfx, char* sn, char* ln, void (*clbck_fn)(char**), char* h_str, bool eqlsgn){
    arg x;
    x.sub_arg = sb_arg;
    x.prefix = prfx;
    x.short_name = sn;
    x.long_name = ln;
    x.callback_func = clbck_fn;
    x.help_str = h_str;
    x.equel_sign = eqlsgn;
    return x;
}

void komut_init(int argc, char** argv, arg args[], void(*no_args)()){
    if(argc < 2){
        no_args();
        return;
    }

    for(int i = 1; argc > i; i++){
        
    }

}