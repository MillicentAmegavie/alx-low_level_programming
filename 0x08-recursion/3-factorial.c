#include "main.h"

/**
 * factorial - The Entry Point.
 * Description - The function that returns the factorial
 * of a given number.
 * @n: The input number.
 * Return: The recursion of the number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}