#include "function_pointers.h"

/**
 * print_name - The Entry Point.
 * Description - The function that prints a name.
 * @name: The input name.
 * @f: The function pointer.
 * Return: .
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
