#include <stdio.h>
#include "main.h"

/**
 * _strstr - func to Locates a substring.
 * @haystack: argument string to search
 * @needle: argument substring to locate
 *
 * Return: return haystack If the substring is located.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *frt = haystack;
		char *sec = needle;

		while (*frt == *sec && *sec != '\0')
		{
			frt++;
			sec++;
		}

		if (*sec == '\0')
			return (haystack);
	}

	return (NULL);
}
