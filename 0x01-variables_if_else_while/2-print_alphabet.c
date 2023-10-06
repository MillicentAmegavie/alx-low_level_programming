#include <stdio.h>
/**
 * main - The Entry Point
 *
 * Print the alphabet in lowercase with function putchar.
 *
 * Return: 0 on Success
 */

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
