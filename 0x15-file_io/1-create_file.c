#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to be created.
 * @text_content:Information data  writed in the file.
 *
 * Return: return 1 if it is success or -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int num;
	int ndat;
	int fwr;

	if (!filename)
		return (-1);

	num = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (num == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (ndat = 0; text_content[ndat]; ndat++)
		;

		fwr = write(num, text_content, ndat);

	if (fwr == -1)
		return (-1);

	close(num);

	return (1);
}
