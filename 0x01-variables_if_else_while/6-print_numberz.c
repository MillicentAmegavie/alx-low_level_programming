#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print all single digit numbers of base 10 starting from 0.
 * Only using putchar, without char variables.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');
	putchar('\n');
	return (0);
}
