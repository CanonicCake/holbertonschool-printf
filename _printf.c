#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prints output based on format
 * @format: format specifier
 * Return: number of characters
 */

int _printf(const char *format, ...)
	
format prnt_frmt[]
{
	{"c", _printchar},
	{"s", _printstr},
	{"%", _printperc},
	{"d", _printint},
	{"i", _printint},
	{NULL, NULL}
}

{
	va_list arg;
	int i, print_chars = 0;
       	int prnt_frmt = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return(-1);

	va_start(arg, format);
	i = 0;
	while (format != NULL)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			prnt_frmt++;
			return (prnt_frmt);
		}
		else if (format[i + 1] == '\0')
			return (1);

		else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			print_chars++;
			i++;
		}
		else
		{
			_putchar(format[i]);
			print_chars++;
			char count ( += 1);
			char count ( += 2);
		}
	}
	va_end(arg);

	return (print_chars);
} 
