#include "main.h"
#include <stdio.h>
/**
 * _strcpy - The Entry Point.
 * Description - The function that copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * @dest: The destination.
 * @src: The source.
 * Return: A pointer to destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (m >= 0)
	{
		*(dest + m) = *(src + m);
		if (*(src + m) == '\0')
			break;
		m++;
	}
	return (dest);
}
