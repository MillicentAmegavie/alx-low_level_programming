#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print all possible combinations of two two-digit numbers,
 * ranging from 0-99, separated by a comma followed by a space,
 * using putchar.
 *
 * Return: Always 0.
 */

int main(void)
{
	int m1, m2;

	for (m1 = 0; m1 <= 98; m1++)
	{
		for (m2 = m1 + 1; m2 <= 99; m2++)
		{
			putchar((m1 / 10) + '0');
			putchar((m1 % 10) + '0');
			putchar(' ');
			putchar((m2 / 10) + '0');
			putchar((m2 % 10) + '0');

			if (m1 == 98 && m2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
