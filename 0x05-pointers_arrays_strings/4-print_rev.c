#include "main.h"

/**
 * print_rev - The Entry Point.
 * Description- A function that prints a string in reverse.
 * @s: The input string to be printed.
 * Return: .
 */
void print_rev(char *s)
{
	int m = 0;

	while (m >= 0)
	{
		if (s[m] == '\0')
			break;
		m++;
	}

	for (m--; m >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');
}
