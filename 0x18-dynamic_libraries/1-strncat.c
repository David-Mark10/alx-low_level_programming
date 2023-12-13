#include "main.h"

/**
 * _strncat - function that Concatenates two strings.
 * @dest: pointer to destination appended upon.
 * @src: pointer value to be appended to dest.
 * @n: The number of bytes to be appended to dest.
 *
 * Return: return a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int ary = 0, d_cunt = 0;

	while (dest[ary++])
	{
		d_cunt++;
	}

	for (ary = 0; src[ary] && ary < n; ary++)
	{
		dest[d_cunt++] = src[ary];
	}

	return (dest);
}
