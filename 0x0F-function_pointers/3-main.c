#include "3-calc.h"

/**
 * main - The Entry Point.
 * Decription - check the code for ALX students.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: Always 0 on Success.
 */

int main(int argc, char *argv[])
{
	int m, n;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	printf("%d\n", operation(m, n));
	return (0);
}
