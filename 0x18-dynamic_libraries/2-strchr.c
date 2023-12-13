#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to Locates a character in a string.
 * @s: argument string to search
 * @c: argument character to locate
 *
 * Return: return If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return (NULL);
}
