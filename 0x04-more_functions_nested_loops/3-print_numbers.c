#include "main.h"

/**
 * print_numbers - The function that prints numbers between 0-9.
 * Return: .
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
		_putchar(m + '0');

	_putchar('\n');
}
