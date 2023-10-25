#include "main.h"

/**
 * _strlen_recursion - The Entry Point.
 * Description - The function that returns the length of a string.
 * @s: The string.
 * Return: The length of a string.
 */

int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
		m += _strlen_recursion(s + 1);
	}

	return (m);
}
