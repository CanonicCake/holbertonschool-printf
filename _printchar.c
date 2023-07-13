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

	va_end(arg);
	return (1);
}



/**
 * _printstr - prints a string of characters
 * @arg: string to print
 * Return: characters in a string
 */

int _printstr(va_list arg)
{
	char *string = va_arg(arg, char*);
	int i = 0;

	if (string == NULL)
		string = "null";
	for (; string[i]; i++)
		_putchar (string[i]);
	va_end(arg);
	return (i);
}

/**
 * _printperc - prints a %
 * @arg: % to print
 * Return: %
 */

int _printperc(va_list arg)
{
	char perc = 37;

	perc = va_arg(arg, int);

	_putchar(perc);

	va_end(arg);
	return (1);
}
