#pragma once
#include "stdio.h"
#include "args.h"

#define TOUCH_HELP_STRING "File creation utility                                     \n\
Usage: ./touch <options> <path>                                                      \n\
                                                                                     \n\
options:                                                                             \n\
      --help         : Prints help and exits.                                        \n\
-v, --vesion         : Prints version and exits.                                     \n\
-a                   : Changes the accsess time.                                     \n\
-c                   :                                                               \n\
-d, --date           : Changes the timestamp using a date string.                    \n\
-h, --no-dereferance : Changes a symbolic link's timestamp.                          \n\
-m                   : Changes the modification time.                                \n\
-t                   : Modifies a timestamp, where the stamp is the date/time format.\n"

void help(char** x){
    printf("%s", TOUCH_HELP_STRING);
}