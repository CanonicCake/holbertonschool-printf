#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _printchar - prints a character
 * @arg: character to print
 * Return: character asked to print
 */

int _printchar(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar (c);

	return (1);
}



/**
 * _printstr - prints a string of characters
 * @arg: string to print
 * Return: characters in a string
 */

int _printstr(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0;

	if (str == NULL)
		str = "null";
	for (; str[i]; i++)
		_putchar (str[i]);
	return (i);
}
