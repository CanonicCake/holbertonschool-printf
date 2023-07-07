#include <unistd.h>

/**
 * _write - acts as a write function
 * @c: character
 *
 * Return: 0 Always (success)
 */

int _write(char c)
{
	return (write (1, &c, 1));
}
