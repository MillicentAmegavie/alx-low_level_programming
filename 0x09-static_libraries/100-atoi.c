#include "main.h"

/**
 * _atoi - The Entry Point.
 * Description -  The function that converts a string to an integer.
 * @s: The input string.
 * Return: The integer.
 */
int _atoi(char *s)
{
	int m = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			m *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * m);
}
