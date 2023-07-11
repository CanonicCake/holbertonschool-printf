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
{
	va_list arg;
	int i, print_chars = 0;
       	int prnt_frmt = 0;

format prnt_frmt[]
{
	{"c", _printchar},
	{"s", _printstr},
	{"%", _printperc},
	{"d", _printint},
	{"i", _printint},
	{NULL, NULL}
}


	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return(-1);

	va_start(arg, format);
	i = 0;
	while (format != NULL)
	{
		if (format[i] != '%')
		{
			_putchar(prnt_frmt);
			i++;
			prnt_frmt++;
			return (prnt_frmt);
			
			if (
		}
		else if (format[i + 1] == '\0')
			return (1);

		else if (format[i + 1] == '%')
		{
			_putchar(prnt_frmt);
			print_chars++;
			i++;
		}
		else
		{
			_putchar(prnt_frmt);
			print_chars++;
		}
	}
	va_end(arg);

	return (print_chars);
} 
