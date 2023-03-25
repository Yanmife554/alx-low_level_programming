#include "main.h"

/**
 * print_line - draws a straight line.
 * @n: the number of _ to be printed
 *
 * Return: 0
 */
void print_line(int n)
{

	if (n > 0)
	{
		_putchar('_' * n);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
