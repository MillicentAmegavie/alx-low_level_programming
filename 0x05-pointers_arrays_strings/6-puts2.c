#include "main.h"

/**
 * puts2 - The Entry Point.
 * Description - The function that prints one char out of 2 of a string.
 * @str: The input string to be printed.
 * Return: .
 */
void puts2(char *str)
{
	int m = 0, l = 0;

	while (str[m++])
		l++;

	for (m = 0; m < l; m += 2)
		_putchar(str[m]);

	_putchar('\n');
}
