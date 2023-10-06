#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print all the numbers of base 16 in lowercase, using only 3 putchar.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	int m;
	char n;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
