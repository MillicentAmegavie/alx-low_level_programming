#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Print the lowercase alphabet in reverse, using only putchar twice.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
