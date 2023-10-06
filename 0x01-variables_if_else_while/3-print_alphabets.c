#include <stdio.h>

/**
 * main -  The Entry Point
 *
 * Prints the alphabet in lowercase, and then in uppercase after using the function putchar.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
