#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct format_h
{
	char *type;
	int(*f)(va_list);
}prnt_frmt;

int _putchar(char c);
int _printf(const char *format, ...);
int _printchar(va_list arg);
int _printstr(va_list arg);
int _printint(va_list arg);
int _printprec(va_list arg);

#endif
