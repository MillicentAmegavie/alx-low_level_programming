#include "main.h"

/**
 * print_chessboard - The Entry Point.
 * Description - The function that prints the chessboard.
 * @a: The input pointer.
 * Return: .
 */

void print_chessboard(char (*a)[8])
{
	unsigned int n, m = 0;

	for (n = 0; n < 64; n++)
	{
		if (n % 8 == 0 && n != 0)
		{
			m = n;
			_putchar('\n');
		}
		_putchar(a[n / 8][n - m]);
	}
	_putchar('\n');
}
