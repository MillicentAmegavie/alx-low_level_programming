#include "main.h"
/**
 * rot13 - The Entry Point.
 * Description - The function that encodes a string using rot13.
 * @m: The input string.
 * Return: dest.
 */

char *rot13(char *m)
{
	int c = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(m + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(m + c) == alphabet[i])
			{
				*(m + c) = rot13[i];
				break;
			}
		}
		c++;
	}

	return (m);
}
