#include "main.h"

/**
 * _isupper - The function that checks for uppercase characters.
 * @c: The parameter to be checked.
 *
 * Return: 1 on Success, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
