#include "main.h"

/**
 * *_strcat - The Entry Point.
 * Description - The function that concatenates srtings.
 * @dest: The parameter pointer to be concatenated.
 * @src: The parameter pointer to be appended to.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int m = 0, l = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (src[l] != '\0')
	{
		dest[m] = src[l];
		l++;
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
