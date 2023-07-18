#include <unistd.h>

/**
 * _putchar - acts on putchar function
 * @c: character to print
 *
 * Return: 0 Always (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - a funtion to print
 * @str: sting to print
 *
 * Return: void
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
