#include <unistd.h>

/**
 * _putchar - acts on putchar function
 * @c: character
 *
 * Return: 0 Always (success)
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
