#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Description -  The function that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	int c, m = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			m += c;
	}

	printf("%d\n", m);

	return (0);
}
