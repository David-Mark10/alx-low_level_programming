#include "main.h"
/**
 * _strcat - fuction that concatenates two strings
 * @dest: argument input value
 * @src: argument input value
 *
 * Return: return a dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		a++;
		j++;
	}

	dest[a] = '\0';
	return (dest);
}
