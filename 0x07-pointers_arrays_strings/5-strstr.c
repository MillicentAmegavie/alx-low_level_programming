#include "main.h"

/**
 * _strstr - The Entry Point.
 * Description - The function that finds the first occurrence
 * of the substring needle in the string haystack.
 * @haystack: The entire string.
 * @needle: The substring.
 * Return: The pointer to the beginning of located substring,
 * otherwise NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	char *m;
	char *n;

	while (*haystack != '\0')
	{
		m = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (m);
		haystack = m + 1;
	}
	return (0);
}
