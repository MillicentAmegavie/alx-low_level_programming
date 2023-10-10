#include "main.h"

/**
 * print_last_digit - The function that prints the last digit of a number.
 * @m: The number in question.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int m)
{
	int c;

	c = m % 10;

	if (c < 0)
		c *= -1;

	_putchar(c + '0');

	return (c);
}
