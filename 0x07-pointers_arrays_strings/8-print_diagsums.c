#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The Entry Point.
 * Description - The function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: The input pointer.
 * @size: The size of the matrix.
 * Return: .
 */

void print_diagsums(int *a, int size)
{
	int m, s1 = 0, s2 = 0;

	for (m = 0; m < (size * size); m++)
	{
		if (m % (size + 1) == 0)
			s1 += *(a + m);
		if (m % (size - 1) == 0 && m != 0 && m < size * size - 1)
			s2 += *(a + m);
	}
	printf("%d, %d\n", s1, s2);
}
