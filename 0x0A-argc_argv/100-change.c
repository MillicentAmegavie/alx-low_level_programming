#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Entry Point.
 * Description - The program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers that contains the
 * program command line arguments.
 * Return: Always 0 on Success.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
