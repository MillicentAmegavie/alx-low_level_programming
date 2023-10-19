#include "main.h"
#include <stdio.h>

/**
 * print_buffer -The Entry Point.
 * Description - The function that prints a buffer.
 * @b: The buffer.
 * @size: The size of buffer.
 * Return: .
 */
void print_buffer(char *b, int size)
{
	int m, n;

	for (m = 0; m < size; m += 10)
	{
		printf("%08x: ", m);

		for (n = 0; n < 10; n++)
		{
			if ((n + m) >= size)
				printf("  ");

			else
				printf("%02x", *(b + n + m));

			if ((n % 2) != 0 && n != 0)
				printf(" ");
		}

		for (n = 0; n < 10; n++)
		{
			if ((n + m) >= size)
				break;

			else if (*(b + n + m) >= 31 &&
				 *(b + n + m) <= 126)
				printf("%c", *(b + n + m));

			else
				printf(".");
		}

		if (m >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
