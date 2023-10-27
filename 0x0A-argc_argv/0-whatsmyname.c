#include <stdio.h>

/**
 * main - The Entry Point.
 * Description - The program that prints its name,
 * followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers that contain the program
 * command line arguments.
 * Return: Always 0 on Success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
