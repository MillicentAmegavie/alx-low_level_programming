#include "main.h"

/**
 * print_alphabet - function to print alphabet in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);

	_putchar('\n');
}
