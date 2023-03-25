#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0-14, followed
 * by a new line
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;
	int num;

	while (i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	}

	_putchar('\n');
}
