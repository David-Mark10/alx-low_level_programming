#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int num;
	int ndat;
	int fwr;

	if (!filename)
		return (-1);

	num = open(filename, O_WRONLY | O_APPEND);

	if (num == -1)
		return (-1);

	if (text_content)
	{
		for (ndat = 0; text_content[ndat]; ndat++)
			;

		fwr = write(num, text_content, ndat);

		if (fwr == -1)
			return (-1);
	}

	close(num);

	return (1);
}
