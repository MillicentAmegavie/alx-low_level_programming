#include "main.h"

/**
 * print_line - The function that draws a straight line,
 * using the character (_).
 * @n: The number of (_) parameter to print.
 *
 * Return: .
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
