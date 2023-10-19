#include "main.h"
/**
 * leet - The Entry Point.
 * Description - The function that encodes a string into 1337
 * @m: The input string.
 * Return: dest.
 */

char *leet(char *m)
{
	int c = 0, u;
	int l[] = {97, 101, 111, 116, 108};
	int q[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(m + c) != '\0')
	{
		for (u = 0; u < 5; u++)
		{
			if (*(m + c) == l[u] || *(m + c) == q[u])
			{
				*(m + c) = n[u];
				break;
			}
		}
		c++;
	}

	return (m);
}
