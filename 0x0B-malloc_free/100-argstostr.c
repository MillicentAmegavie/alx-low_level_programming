#include "main.h"
#include <stdlib.h>

/**
 * argstostr - The Entry Point.
 * Description - The function that concatenates all
 * the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: pointer of the array of char.
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int l, m, j, n;

	if (ac == 0)
		return (NULL);

	for (l = m = 0; m < ac; m++)
	{
		if (av[m] == NULL)
			return (NULL);

		for (j = 0; av[m][j] != '\0'; j++)
			l++;
		l++;
	}

	a = malloc((l + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (m = j = n = 0; n < l; j++, n++)
	{
		if (av[m][j] == '\0')
		{
			a[n] = '\n';
			m++;
			n++;
			j = 0;
		}
		if (n < l - 1)
			a[n] = av[m][j];
	}
	a[n] = '\0';

	return (a);
}
