#include "variadic_functions.h"

/**
 * sum_them_all - The Entry Point.
 * Description - The function that returns the sum of
 * all its parameters.
 * @n: The amount of the arguments.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, s = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		s += va_arg(nums, int);

	va_end(nums);

	return (s);
}
