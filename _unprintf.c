#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - prints an array of strings and characters
 * format: an array to variadic formats
 *
 * Return: _printf, 1 on failure
 */

int _printf(const char *format, ...);
{
va_list ap;
	char *temp;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				temp = va_arg(ap, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
