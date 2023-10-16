#include "main.h"

/**
 * rev_string - The Entry Point
 * Description - The function that reverses a string.
 * @s: The input string to be reversed.
 * Return: .
 */
void rev_string(char *s)
{
	int m;
	int c = 0;
	char l;

	for (m = 0 ; s[m] != '\0' ; m++)
		c++;
	for (m = 0 ; m < c / 2 ; m++)
	{
		l = s[m];
		s[m] = s[c - 1 - m];
		s[c - 1 - m] = l;
	}
}
