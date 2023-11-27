#include "main.h"
#include <stdio.h>

/**
 * error_file - The Entry Point.
 * Description - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: .
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - The Entry Point.
 * Description - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0 on Succes.
 */

int main(int argc, char *argv[])
{
	int f, t, e;
	ssize_t c, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f = open(argv[1], O_RDONLY);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f, t, argv);

	c = 1024;
	while (c == 1024)
	{
		c = read(f, buffer, 1024);
		if (c == -1)
			error_file(-1, 0, argv);
		wr = write(t, buffer, c);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	e = close(f);
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}

	e = close(t);
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	return (0);
}

