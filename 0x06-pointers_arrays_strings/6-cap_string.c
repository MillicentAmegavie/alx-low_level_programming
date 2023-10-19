#include "main.h"

/**
 * cap_string - The Entry Point.
 * Description - The function that capitalizes all words of a string.
 * @m: The input string.
 * Return: dest.
 */

char *cap_string(char *m)
{
	int i;

	i = 0;
	while (m[i] != '\0')
	{
		if ((m[i - 1] == ' ' || m[i - 1] == '\n'
		|| m[i - 1] == '\t' || m[i - 1] == ','
		|| m[i - 1] == ';' || m[i - 1] == '!'
		|| m[i - 1] == '?' || m[i - 1] == '"'
		|| m[i - 1] == '(' || m[i - 1] == ')'
		|| m[i - 1] == '{' || m[i - 1] == '}'
		|| m[i - 1] == '.')
		&& (m[i] >= 'a' && m[i] <= 'z'))
		{
			m[i] = m[i] - 32;
		}
		else if ((m[0] >= 97 && m[0] <= 122))
		{
			m[0] = m[0] - 32;
		}
		else
		{
			m[i] = m[i];
		}
		i++;
	}
	return (m);
}
