#include "variadic_functions.h"

/**
 * print_all - The Entry Point.
 * Description - The function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: .
 */

void print_all(const char * const format, ...)
{
	va_list v;
	unsigned int m = 0, j, d = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_start(v, format);
	while (format && format[m])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[m] == t_arg[j] && d)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[m])
		{
		case 'c':
			printf("%c", va_arg(v, int)), d = 1;
			break;
		case 'i':
			printf("%d", va_arg(v, int)), d = 1;
			break;
		case 'f':
			printf("%f", va_arg(v, double)), d = 1;
			break;
		case 's':
			s = va_arg(v, char *), d = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} m++;
	}
	printf("\n"), va_end(v);
}
