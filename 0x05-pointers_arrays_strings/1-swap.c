#include "main.h"

/**
 * swap_int - The Entry Point.
 * Description - Swaps the values of two integers.
 * @a: The 1st integer to swap.
 * @b: The 2nd integer to swap.
 * Return: .
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
