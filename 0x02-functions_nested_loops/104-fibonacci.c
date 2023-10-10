#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Description - The function that prints the first
 * 98 Fibonacci numbers, starting with 1 and 2..
 *
 * Return: Always 0 on Success.
 */

int main(void)
{
	int c;
	unsigned long m = 0, n = 1, o;
	unsigned long m1, m2, n1, n2;
	unsigned long p, q;

	for (c = 0; c < 92; c++)
	{
		o = m + n;
		printf("%lu, ", o);

		m = n;
		n = o;
	}

	m1 = m / 10000000000;
	n1 = n / 10000000000;
	m2 = m % 10000000000;
	n2 = n % 10000000000;

	for (c = 93; c < 99; c++)
	{
		p = m1 + n1;
		q = m2 + n2;
		if (m2 + n2 > 9999999999)
		{
			p += 1;
			q %= 10000000000;
		}

		printf("%lu%lu", p, q);
		if (c != 98)
			printf(", ");

		m1 = n1;
		m2 = n2;
		n1 = p;
		n2 = q;
	}
	printf("\n");
	return (0);
}
