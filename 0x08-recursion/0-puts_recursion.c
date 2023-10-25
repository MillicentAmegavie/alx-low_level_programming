#include "main.h"

/**
 * _puts_recursion - The Entry Point.
 * Description - The function that prints a string,
 * followed by a new line.
 * @s: The string.
 * Return: .
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
