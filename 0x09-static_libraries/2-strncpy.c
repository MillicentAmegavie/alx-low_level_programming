#include "main.h"

/**
 * _strncpy - The Entry Point.
 * Description - The function that copies a string.
 * @dest: The destination.
 * @src: The source.
 * @n: The number of bytes from src.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	for ( ; m < n; m++)
		dest[m] = '\0';

	return (dest);
}
