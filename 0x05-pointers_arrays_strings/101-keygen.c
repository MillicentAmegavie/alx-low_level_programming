#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - The Entry Point
 * Description - The program that generates random passwords.
 * Return: 0 Always on Success.
 */
int main(void)
{
	int m = 2772, i = 0, l, r;
	char p[100];
	time_t t;

	srand((int) time(&t));
	while (m > 126)
	{
		r = rand() % 126;
		p[i] = r;
		m -= r;
		i++;
	}
	if (m > 0)
		p[i] = m;
	else
	{
		i--;
	}

	for (l = 0; l <= i; l++)
	{
		printf("%c", p[l]);
	}
	return (0);
}
