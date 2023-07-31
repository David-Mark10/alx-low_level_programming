#include "main.h"

/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x;

	for (i = 0; s[i] != '\0'; i++)
		for (x = 0; accept[x] != '\0'; x++)
			if (s[i] == accept[x])
				goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}
