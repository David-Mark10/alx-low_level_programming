#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - func that Searches a string for any of a set of bytes.
 * @s: argument string to searched
 * @accept: argument set of bytes to search for
 *
 * Return: return sum if a set is matched.
 *         If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int j, b;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[j] == accept[b])
			{
				return (s + j);

			}
		}
	}

	return (NULL);
}
