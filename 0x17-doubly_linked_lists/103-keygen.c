#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - The entry point.
 * Description - finds the biggest number.
 * @usrn: username.
 * @len: length of username.
 * Return: biggest number.
 */

int f4(char *usrn, int len)
{
	int c;
	int v;
	unsigned int rn;

	c = *usrn;
	v = 0;

	while (v < len)
	{
		if (c < usrn[v])
			c = usrn[v];
		v += 1;
	}

	srand(c ^ 14);
	rn = rand();

	return (rn & 63);
}

/**
 * f5 - The entry point.
 * Description - multiplies each char of username.
 * @usrn: username.
 * @len: length of username.
 * Return: multiplied character.
 */

int f5(char *usrn, int len)
{
	int c;
	int v;

	c = v = 0;

	while (v < len)
	{
		c = c + usrn[v] * usrn[v];
		v += 1;
	}

	return (((unsigned int)c ^ 239) & 63);
}

/**
 * f6 - The entry point.
 * Description - generates a random char.
 * @usrn: username.
 * Return: random character.
 */

int f6(char *usrn)
{
	int c;
	int v;

	c = v = 0;

	while (v < *usrn)
	{
		c = rand();
		v += 1;
	}

	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - The entry point.
 * @argc: the arguments count.
 * @argv: the arguments vector.
 * Return: Always 0 on suscess.
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int l, c, v;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (l = 0; argv[1][l]; l++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(l ^ 59) & 63];
	/* ----------- f2 ----------- */
	c = v = 0;
	while (v < l)
	{
		c = c + argv[1][v];
		v = v + 1;
	}
	keygen[1] = ((char *)alph)[(c ^ 79) & 63];
	/* ----------- f3 ----------- */
	c = 1;
	v = 0;
	while (v < l)
	{
		c = argv[1][v] * c;
		v = v + 1;
	}
	keygen[2] = ((char *)alph)[(c ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], l)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], l)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (c = 0; keygen[c]; c++)
		printf("%c", keygen[c]);
	return (0);
}
