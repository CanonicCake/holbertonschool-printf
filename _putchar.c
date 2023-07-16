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

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * _strlen - finds the length of a string to return
 * @str: the string
 *
 * Return: length
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
