#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Description - The function that prints the sum of even-valued
 * Fibonacci sequence terms not exceeding 4000000.
 * Return: 0 on Success.
 */

int main(void)
{
	unsigned long m = 0, n = 1, o;
	float p;

	while (1)
	{
		o = m + n;
		if (o > 4000000)
			break;

		if ((o % 2) == 0)
			p += o;

		m = n;
		n = o;
	}
	printf("%.0f\n", p);

	return (0);
}
