#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - A function that creates an array of chars,
 * * and initializes it with a specific char.
 * @size: The size of the array
 * @c: Character to initialize the array.
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;


	if (size == 0)
		return (NULL);

	ar = (char *)malloc(size * (sizeof(char)));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
