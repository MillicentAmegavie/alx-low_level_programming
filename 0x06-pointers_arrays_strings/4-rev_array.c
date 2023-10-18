#include "main.h"

/**
 * reverse_array - The Entry Point.
 * Description - The function that reverses the content of an array
 * of integers.
 * @a: The array to reverse.
 * @n: The number of elements of the array.
 * Return: .
 */

void reverse_array(int *a, int n)
{
	int l, m, o;

	for (l = 0; l < n - 1; l++)
	{
		for (m = l + 1; m > 0; m--)
		{
			o = *(a + m);
			*(a + m) = *(a + (m - 1));
			*(a + (m - 1)) = o;
		}
	}
}
