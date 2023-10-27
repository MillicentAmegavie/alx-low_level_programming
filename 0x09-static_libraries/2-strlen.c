#include "main.h"

/**
 * _strlen - The Entry Point.
 * Description - The function that returns the length of a string.
 * @s: The parameter string length.
 * Return: The length of a string.
 */
int _strlen(char *s)
{
	int m;
	int count = 0;

	for (m = 0; s[m] != '\0'; m++)
		count++;
	return (count);
}
