#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: the first string of the function.
 * @s2: the second string of the function
 * @n: the length of s2 to concatenate in memory s1.
 * Return: pointer to the allocated memory of s1 and s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrch;
        unsigned int i, j = n;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i]; i++)
                j++;

        ptrch = malloc(sizeof(char) * (j + 1));

        if (ptrch == NULL)
                return (NULL);

        j = 0;

        for (i = 0; s1[i]; i++)
                ptrch[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptrch[j++] = s2[i];

        ptrch[j] = '\0';
        return (ptrch);
}
