#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value to be multiplied
 * @y: the number of times the value is multiplied
 *
 * Return: the value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
