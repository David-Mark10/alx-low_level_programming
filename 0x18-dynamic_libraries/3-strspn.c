#include "main.h"

/**
 * _strspn - func to get the length of a prefix substring.
 * @s: argument string to be searched.
 * @accept: argument prefix to be measured.
 *
 * Return: return the number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, b, btes, cunt;

	btes = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		cunt = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[])
			{
				btes++;
				cunt = 1;
			}
		}
		if (cunt == 0)
		{
			return (btes);
		}
	}

	return (btes);
}
