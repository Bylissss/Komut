#pragma once
#include "../../komut.h"
#include "help.h"
#include "version.h"

arg* komut_arg_init(){

    arg arg_help = komut_create_arg(
        NULL,
        LINUX,
        NULL,
        "help",
        help,
        "Prints help and exits\n",
        false
    );

    arg arg_version = komut_create_arg(
        NULL,
        LINUX,
        "v",
        "version",
        version,
        "Prints version and exits\n",
        false
    );

    arg args[] = {help, version};
    return args;
}