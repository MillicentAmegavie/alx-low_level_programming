#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Entry Point.
 * Description - A program that prints the opcodes
 * of its own main function.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: Always 0 on Success.
 */

int main(int argc, char *argv[])
{
	char *o = (char *) main;
	int m, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < nb; m++)
	{
		printf("%02x", o[m] & 0xFF);
		if (m != nb - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
