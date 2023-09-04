#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This Reads a text file and prints it to POSIX stdout.
 * @filename: The pointer to the name of the file.
 * @letters: A number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t i, j, k;
	char *mem_sp;

	if (filename == NULL)
		return (0);

	mem_sp = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	i = open(filename, O_RDONLY);
	j = read(i, buffer, letters);
	k = write(STDOUT_FILENO, buffer, r);

	if (i == -1 || j == -1 || k == -1 || k != r)
	{
		free(mem_sp);
		return (0);
	}

	free(mem_sp);
	close(i);

	return (k);

}
