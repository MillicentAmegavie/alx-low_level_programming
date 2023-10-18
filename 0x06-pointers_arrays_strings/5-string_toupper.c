#include "main.h"

/**
 * string_toupper - The Entry Point.
 * Description - The function that changes all lowercase letter,
 * of a string to uppercase
 * @m: The input string to be changed.
 * Return: dest.
 */

char *string_toupper(char *m)
{
	int u = 0;

	while (m[u])
	{
		if (m[u] >= 'a' && m[u] <= 'z')
			m[u] -= 32;

		u++;
	}

	return (m);
}
