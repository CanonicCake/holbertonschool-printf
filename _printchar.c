#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _printchar - prints a character
 * @arg: character to print
 *
 * Return: character asked to print
 */

int _printchar(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);

	return (1);
}



/**
 * _printstr - prints a string of characters
 * @arg: string to print
 *
 * Return: characters in a string
 */

int _printstr(va_list s)
{
	char *str = va_arg(s, char *);
	int length;

	if (str == NULL)
	{
		str = "(null)";
	}
	length = _puts(str);
	return (length);
}

