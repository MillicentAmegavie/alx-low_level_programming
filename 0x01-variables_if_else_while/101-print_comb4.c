#include <stdio.h>

/**
 * main - The Entry Point
 * Print all possible combinations of three different digits,
 * using only putchar.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	int m1, m2, m3;

	for (m1 = 0; m1 < 8; m1++)
	{
		for (m2 = m1 + 1; m2 < 9; m2++)
		{
			for (m3 = m2 + 1; m3 < 10; m3++)
			{
				putchar((m1 % 10) + '0');
				putchar((m2 % 10) + '0');
				putchar((m3 % 10) + '0');

				if (m1 == 7 && m2 == 8 && m3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
