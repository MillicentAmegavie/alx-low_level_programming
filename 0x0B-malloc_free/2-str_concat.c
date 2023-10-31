#include "main.h"
#include <stdlib.h>

/**
 * str_concat - The Entry Point.
 * Description - The function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: pointer of the array of chars.
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, c = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	con = malloc(sizeof(char) * l);

	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con[c++] = s1[i];

	for (i = 0; s2[i]; i++)
		con[c++] = s2[i];

	return (con);
}
