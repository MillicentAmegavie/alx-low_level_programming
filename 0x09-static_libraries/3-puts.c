#include "main.h"

/**
 * _puts - The Entry Point.
 * Description - The function that rints a string to stdout.
 * @str: The string to be printed.
 * Return: .
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
