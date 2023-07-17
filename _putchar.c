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

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strlen - finds the string length
 * @str: points to the string to find
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
