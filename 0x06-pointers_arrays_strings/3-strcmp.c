#include "main.h"
/**
 * _strcmp - The Entry Point.
 * Description - The function that compares two strings.
 * @s1: The first parameter string to be compared.
 * @s2: The second parameter string to be compared.
 * Return: 0 if s1 = s2, otherwise number.
 */

int _strcmp(char *s1, char *s2)
{
	int b = 0, m = 0;

	while (m == 0)
	{
		if ((*(s1 + b) == '\0') && (*(s2 + b) == '\0'))
			break;
		m = *(s1 + b) - *(s2 + b);
		b++;
	}

	return (m);
}
