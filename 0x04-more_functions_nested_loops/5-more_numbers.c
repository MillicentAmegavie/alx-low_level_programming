#include "main.h"

/**
 * more_numbers - The function that prints the numbers 0-14(10x)
 *
 * Return: .
 */
void more_numbers(void)
{
	int m, c;

	for (c = 0; c <= 9; c++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
