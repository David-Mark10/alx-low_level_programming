#include "main.h"
#include <stdlib.h>
#include<stddef.h>

/**
 * malloc_checked - use to allocate memory
 * @b: the size of the memory to be allocated
 * Return: pointer to the address block of memory
 */
void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);

	if (ar == NULL)

		exit(98);

	return (ar);
}
