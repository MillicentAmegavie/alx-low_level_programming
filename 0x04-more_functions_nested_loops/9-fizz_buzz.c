#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description - The function that prints the numbers from 1-100.
 *
 * Return: Always 0 on Success.
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3) == 0 && (m % 5) == 0)
			printf("FizzBuzz");

		else if ((m % 3) == 0)
			printf("Fizz");

		else if ((m % 5) == 0)
			printf("Buzz");

		else
			printf("%d", m);

		if (m == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
