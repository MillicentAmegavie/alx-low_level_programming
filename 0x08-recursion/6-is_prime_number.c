#include "main.h"

/**
 * is_divisible - The Entry Point.
 * Description - The function that checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: number is divisible by 0.
 * Or number is not divisible by 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - The Entry Point.
 * Description - The function that checks if a number is prime.
 * @n: The number.
 * Return: integer is 0 or 1.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
