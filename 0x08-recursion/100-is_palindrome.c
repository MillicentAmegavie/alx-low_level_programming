#include "main.h"

/**
 * _strlen_recursion - The Entry Point.
 * Description - The function that returns the length of a string.
 * @s: The string.
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - The Entry Point.
 * Description - The function that compares each
 * character of the string.
 * @s: The string.
 * @n1: The smallest parameter.
 * @n2: The biggest parameter.
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - The Entry Point.
 * Description - The function that detects if a
 * string is a palindrome.
 * @s: The string.
 * Return: 1 if s is a palindrome, Otherwise 0.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
