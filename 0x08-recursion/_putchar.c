#include "main.h"
#include <unistd.h>

/**
 * putchar - write the character c to stdout
 * @c: the character to be printed
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
