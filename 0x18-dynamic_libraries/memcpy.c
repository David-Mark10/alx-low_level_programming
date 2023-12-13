#include "main.h"

/**
 * _memcpy - function that copies @n bytes
 * from the memory area pointed to.
 * @dest: point string memory to copy to.
 * @src: a pointer string to  copy characters from.
 * @n: it is memory in bytes to copy from @src.
 *
 * Return: returs dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
