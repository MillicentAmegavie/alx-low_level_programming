#include "main.h"

/**
 * print_times_table - The function that prints the times table
 * of the input starting with 0.
 *
 * @n: Parameter of the times table to be printed.
 *
 * Return:
 */
void print_times_table(int n)
{
	int u, m, p;

	if (n >= 0 && n <= 15)
	{
		for (u = 0; u <= n; u++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = u * m;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
