#include "main.h"

/**
 * _strspn - Thee Entry Point.
 * Desvription - The function that gets the length of a prefix substring.
 * @s: The initial segment.
 * @accept: The  accepted bytes.
 * Return: The number of bytes accepted.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				b++;
				break;
			}

			else if (accept[m + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
