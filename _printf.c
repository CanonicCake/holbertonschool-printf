#include "main.h"

/**
 * _printf - prints an array of strings and characters
 * format: an array to variadic formats
 *
 * Return: _printf, 1 on failure
 */

int _printf(const char *format, ...);
{

	va_list prms;
	char c;
	char s;
	char %;

	va_start(prms, format);
	while (format == \0)
	{
		_write("\n");
		return;
	}
	while (format[c])
	{
		if (
	}
}
