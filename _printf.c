#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prints output based on format
 * @format: format specifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, print_chars = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return(-1);
	
	va_start(arg, format);
 	for (i=0; format && format[i]; i++)
	{

		if(format[i] != '%')
        	{
			_putchar(format[i]);
			print_chars++;
		}

		else if (format[i + 1] == '\0')
			return(-1);

		else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			print_chars++;
			i++;
		}

		else if(prnt_frmt(format[i + 1]) != NULL)
		{
			print_chars = print_chars +print_frmt(format[ i +])(arg);
		}

		else
  		{
 			_putchar(format[i]);
			print_chars++;
		}
	}
	va_end(arg);
	return (print_chars);
}
