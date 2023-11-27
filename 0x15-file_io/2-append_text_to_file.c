#include "main.h"

/**
 * append_text_to_file - The Entry Point.
 * Description - appends text at the end of a file..
 * @filename: filename.
 * @text_content: string to add to the end of the file.
 * Return: function fails or filename is NULL - -1, Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, n, r;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		r = write(f, text_content, n);

		if (r == -1)
			return (-1);
	}

	close(f);

	return (1);
}
