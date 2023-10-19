#include "main.h"
/**
 * leet - The Entry Point.
 * Description - The function that encodes a string into 1337
 * @m: The input string.
 * Return: dest.
 */

char *leet(char *m)
{
	int a = 0;
	int b = 0;
	int c = 0;

	char d[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	while (m[a] != '\0')
	{
		while (d[b] != '\0')
		{
			if (m[a] == d[b])
			{
				c = b;
				m[a] = e[c];
			}
			b++;
		}
		a++;
	}
	return (m);
}
