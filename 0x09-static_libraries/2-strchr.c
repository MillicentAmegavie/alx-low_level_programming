#include "main.h"

/**
 * _strchr - The Entry Point.
 * Description - The function that locates a character in a string.
 * @s: The searched string.
 * @c: The located character.
 * Return: The pointer to the first occurrence of the character c.
 * Otherwise, NULL.
 */

char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	for (; *(s + m) != '\0'; m++)
		if (*(s + m) == c)
			return (s + m);
	if (*(s + m) == c)
		return (s + m);
	return ('\0');
}
