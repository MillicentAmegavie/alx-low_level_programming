#include "main.h"

/**
 * print_alphabet_x10 - The function that prints 10 times the alphabet,
 * in lowercase.
 *
 * Return:
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char m;

	while (n++ <= 9)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
