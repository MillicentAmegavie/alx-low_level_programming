#include "main.h"

/**
 * _print_rev_recursion - The Entry Point.
 * Description - The function that prints a string in reverse.
 * @s: The string.
 * Return: .
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
