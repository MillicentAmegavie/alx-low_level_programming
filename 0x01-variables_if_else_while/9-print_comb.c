#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print all possible combinations of single-digit numbers, using only putchar.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar((m % 10) + '0');
		if (m == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
