#include "main.h"

/**
 * _isdigit - The function that checks for digit (0-9).
 * @c: The parameter to be checked.
 *
 * Return: 1 on Success, 0 on any other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
