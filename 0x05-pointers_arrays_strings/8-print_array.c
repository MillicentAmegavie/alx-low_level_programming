#include "main.h"
#include <stdio.h>

/**
 * print_array - The Entry Point.
 * Description - The function prints n elements of an array of integers.
 * @a: The input array.
 * @n: The input n elements.
 * Return: .
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
