#include "main.h"

/**
 * _strncat - The Entry Point
 * Description - The function that concatenates strings.
 * @dest: The parameter string to be appended upon.
 * @src: The parameter string to be appended to dest.
 * @n: The number of bytes used from src to dest.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0, c = 0;

	while (dest[m++])
		c++;

	for (m = 0; src[m] && m < n; m++)
		dest[c++] = src[m];

	return (dest);
}
