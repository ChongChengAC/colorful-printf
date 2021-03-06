#include "colorful_printf.h"
#include <stdlib.h>
#include <stdio.h>

void error(const char info[])
{
    printf(RED "[ERROR] %s\n" STDOUT_RESET, info);
    exit(1);
}

void warning(const char info[])
{
    printf(YELLOW "[WARNING] %s\n" STDOUT_RESET, info);
    exit(1);
}

void debug(const char info[])
{
#ifdef DEBUG
    printf(BLUE "[INFO] %s\n" STDOUT_RESET, info);
#endif
}
