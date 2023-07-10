#include <stdarg.h>
#include "main.h"

/**
 * printint - prints an interager
 * @ard: number to be printed
 * Return: number to be printed
 */

int _printint(va_list ap)
{
	int n = va_arg(ap, int);
	int cont = 1;
	unsigned int num;

	if (n > 0)
	{
		cont ++;
		_putchar ('-');
		num = -n;
		_printint(num);
	}
	else
	{
		num = n;
		_printint(num);
	}
	while (num / 10 != 0)
	{
		cont++;
		num = num / 10;
	}
	return (cont);
} 
