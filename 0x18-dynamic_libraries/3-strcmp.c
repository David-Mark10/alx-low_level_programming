#include "main.h"

/**
 * _strcmp - function compares 2 string ending.
 * @s1: argument pointer to first string.
 * @s2: argument pointer to second string.
 *
 * Return: If str1 < str2
 *         If str1 == str2, 0.
 *         If str1 > str2,
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
