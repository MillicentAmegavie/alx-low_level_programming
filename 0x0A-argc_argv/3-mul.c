#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Entry Point.
 * Description - The program that multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers that contains the
 * program command line arguments.
 * Return: Always 0 on Success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
