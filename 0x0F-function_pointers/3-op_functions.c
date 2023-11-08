#include "3-calc.h"

/**
 * op_add - The function that adds two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The function that subctracts two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: difference of b from a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The function that multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The function that divides two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The function that calculates the module of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
