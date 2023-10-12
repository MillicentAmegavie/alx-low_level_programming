#include "main.h"

/**
 * print_diagonal - The function that draws a diagonal line,
 * using the (\) character.
 * @n: The number of (\) characters to be printed.
 *
 * Return: .
 */
void print_diagonal(int n)
{
	int m, e;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (e = 0; e < m; e++)
				_putchar(' ');
			_putchar('\\');

			if (m == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
