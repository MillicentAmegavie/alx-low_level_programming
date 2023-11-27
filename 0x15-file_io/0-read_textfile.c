#include "main.h"

/**
 * read_textfile - The Entry Point.
 * Description - reads a text file and prints it to POSIX stdout.
 * @filename: filename.
 * @letters: numbers of letters to be read and printed.
 * Return: number of bytes to be printed.
 * If NULL or failure, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int m;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	m = open(filename, O_RDONLY);

	if (m == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(m, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(m);

	free(buffer);

	return (nwr);
}
