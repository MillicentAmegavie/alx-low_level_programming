#include <stdio.h>

/**
 * main - The Entry Point.
 * Description - The program that prints all arguments it receives.
 * @argc: The number of command line arguments.
 * @argv: The array of pointers that contains the
 * program command line arguments.
 * Return: Always 0 on Success.
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);
	return (0);
}
