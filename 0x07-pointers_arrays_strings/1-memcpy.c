#include "main.h"

/**
 * _memcpy - The Entry Point.
 * Description - The function that copies memory area,
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes filled.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(dest + m) =  *(src + m);

	return (dest);
}
