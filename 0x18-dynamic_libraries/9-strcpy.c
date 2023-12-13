#include "main.h"

/**
 * _strcpy - func that copies the string pointed to by @src.
 * @dest: pointer to the buffer to copy the string to.
 * @src: the argument string to copy
 *
 * Return:return pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
