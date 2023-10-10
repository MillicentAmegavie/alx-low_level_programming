#include <stdio.h>

/**
 * print_to_98 - The function that prints all natural numbers,
 * from input to 9.
 * @n: The number to begin counting at.
 *
 * Return:
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
