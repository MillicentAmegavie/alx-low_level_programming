#include "main.h"

/**
 * _strpbrk - The Entry Point.
 * Description - The function that searches a string,
 * for any of a set of bytes.
 * @s: The first string.
 * @accept: The second string.
 * Return: A pointer to the matched byte if s matches one of the
 * bytes in accept, otherwise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}

		s++;
	}

	return ('\0');
}
