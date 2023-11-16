#include <stdio.h>

/**
 * bmain - The Entry Point.
 * Description - The function executed before main.
 * Return: .
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
