#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#inlcude <string.h>

format prnt_frmt[]
{
        {"c", _printchar},
        {"s", _printstr},
        {"%", _printperc},
        {"d", _printint},
        {"i", _printint},
        {NULL, NULL}
}

