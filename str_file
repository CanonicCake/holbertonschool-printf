#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

format prnt_frmt[]
{
        {"c", _printchar},
        {"s", _printstr},
        {"%", _printperc},
        {"d", _printint},
        {"i", _printint},
        {NULL, NULL}
}

typedef struct format_h
{
        char *type;
        int(*f)(va_list);
}prnt_frmt;
