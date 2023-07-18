#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * prnt_format - calls a specific format
 * 
 * Return: format
 */

int call_prnt_frmt(va_list arg, char tempc)
{
	prnt_frmt frmt[] =
	{
		{"c", _printchar},
		{"s", _printstr},
		{"%", NULL},
		{NULL, NULL}
	};
	int i = 0, total = 0;

	while (frmt[i].type != NULL)
	{
		if (tempc == *frmt[i].type)
		{
			total = frmt[i].f(arg);
			total++;
			return (total);
		}
		i++;
	}
	if (tempc == 37)
	{
		_putchar(37);
		return (1);
	}
	else
	{
		_putchar(37);
		_putchar(tempc);
		return (2);
	}
	return (total);
}

/**
 * _printf - prints output based on format
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char * const format, ...)

{
	va_list arg;
	unsigned int i = 0, print_chars = 0;
	char tempc;

	if (format == NULL)
        	return(-1);
	
	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			print_chars++;
		}
		else
		{
			tempc = format[i + 1];
			print_chars += call_prnt_frmt(arg, tempc);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (print_chars);
}
