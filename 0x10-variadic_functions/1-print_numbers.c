#include "variadic_functions.h"

/**
 * print_numbers - The Entry Point.
 * Description - The function that prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Return: .
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int m;

	va_start(v, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(v, int));
		if (separator && m < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(v);
}
