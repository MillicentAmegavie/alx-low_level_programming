#include <stdio.h>

/**
 * main - The Entry Point.
 * Description - The program that prints the number of
 * arguments passed into it.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers that contains the
 * program command line arguments.
 * Return: Always 0 on Success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
