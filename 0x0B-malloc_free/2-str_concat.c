#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *j1, *j2;
	int i = 0, cournt1 = 0, cournt2 = 0;

	j1 = s1;
	j2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		cournt1++;
		s1++;
	}
	s1 = j1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		cournt2++;
		s2++;
	}
	s2 = j2;
	ptr = malloc(sizeof(char) * (cournt1 + cournt2 + 1));
	j1 = ptr;
	if (ptr == NULL)
		return (NULL);
	for (; i < (cournt1 + cournt2); i++)
	{
		if (i < cournt1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else
		{
			ptr[i] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (j1);
}
