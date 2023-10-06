#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print all possible combinations of two different digits using only putchar.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	int m1, m2;

	for (m1 = 0; m1 < 9; m1++)
	{
		for (m2 = m1 + 1; m2 < 10; m2++)
		{
			putchar((m1 % 10) + '0');
			putchar((m2 % 10) + '0');

			if (m1 == 8 && m2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
