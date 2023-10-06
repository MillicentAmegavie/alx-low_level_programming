#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print alphabet in lowercase, except for q and e using putchar only twice.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m != 'e' && m != 'q')
			putchar(m);
	}

	putchar('\n');

	return (0);
}
