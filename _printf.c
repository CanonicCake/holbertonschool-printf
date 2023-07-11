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
	int counter;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return(-1);

	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		counter = 0;
		while (counter != '%')
		{
			_putchar(c);
			i++;
			counter++;
			return (counter);
		}
		if (format == %)
		{
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
