#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints the letters
 * @filename: The name of the filename.
 * @letters: numbers of letters that must be printed.
 *
 * Return: numbers of letters printed. if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t frd, fwr;
	char *ptr;
	int num;

	if (!filename)
		return (0);

	num = open(filename, O_RDONLY);

	if (num == -1)
		return (0);

	ptr = malloc(sizeof(char) * (letters));
	if (!ptr)
		return (0);

	frd = read(num, ptr, letters);
	fwr = write(STDOUT_FILENO, ptr, frd);

	close(num);

	free(ptr);

	return (fwr);
}
