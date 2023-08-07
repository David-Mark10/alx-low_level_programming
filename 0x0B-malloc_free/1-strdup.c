#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: A pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *ptr, *j;

	int i = 0, cournt = 0;

	if (str == NULL)
		return (NULL);

	j = str;

	while (*str)
	{
		cournt++;
		str++;
	}

	str = j;
	ptr = malloc(sizeof(char) * (cournt + 1));
	j = ptr;

	if (ptr != NULL)
	{
		for (; i < cournt; i++)
		{
			ptr[i] = *str;
			str++;
		}
		ptr[i] = '\0';
		return (j);
	}
	else
		return (NULL);
}
