#include "variadic_functions.h"

/**
 * print_strings - The Entry Point.
 * Description - The function that prints strings.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * Return: .
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int m;
	char *s;

	va_start(v, n);

	for (m = 0; m < n; m++)
	{
		s = va_arg(v, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (m < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(v);
}
