#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>
#include <time.h>

/**
 * format_h - structure format
 * @char: returns a character
 * @type: is the type of function
 * @f: function that we passed
 */


typedef struct format_h
{
	char *type;
	int (*f)();
} prnt_frmt;

int _putchar(char c);
int _printf(const char * const format, ...);
int _printchar(va_list c);
int _printstr(va_list s);
int _printint(va_list num);
int call_prnt_frmt(va_list arg, char tempc);
int _puts(char *str);

#endif
