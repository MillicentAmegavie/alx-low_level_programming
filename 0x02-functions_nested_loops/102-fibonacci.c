#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Description - A program that prints first 50 Fibonacci numbers,
 * starting with 1 and 2,separated by a comma followed by a space.
 *
 * Return: 0 on Success.
 */
int main(void)
{
	int c;
	unsigned long m = 0, n = 1, o;

	for (c = 0; c < 50; c++)
	{
		o = m + n;
		printf("%lu", o);

		m = n;
		n = o;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
