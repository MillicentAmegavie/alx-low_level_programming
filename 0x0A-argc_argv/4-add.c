#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -The Entry Point.
 * Description - The program that adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers that contains the
 * program command line arguments.
 * Return: Always 0 on  Success.
 */

int main(int argc, char *argv[])
{
	int m, n, add = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[m]);
	}
	printf("%d\n", add);
	return (0);
}
