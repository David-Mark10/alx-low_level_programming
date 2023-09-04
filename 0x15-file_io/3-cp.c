#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer -This allocates 1024 bytes for a buffer.
 * @file: Name of the file mem_sp is storing chars for.
 *
 * Return: the pointer to the newly-allocated mem_sp.
 */
char *create_buffer(char *file)
{
	char *mem_sp;

	mem_sp = malloc(sizeof(char) * 1024);

	if (mem_sp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (mem_sp);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - It copies the contents of a file to another file.
 * @argc: A number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, i, j;
	char *mem_sp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	mem_sp = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, mem_sp, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(mem_sp);
			exit(98);
		}

		j = write(to, mem_sp, i);
		if (to == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(mem_sp);
			exit(99);
		}

		i = read(from, mem_sp, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (i > 0);

	free(mem_sp);
	close_file(from);
	close_file(to);

	return (0);
}
