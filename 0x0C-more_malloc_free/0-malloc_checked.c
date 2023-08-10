#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - use to allocate memory
 * @ar: the size of the memory to be allocated
 * Return: pointer to the address block of memory
 */
void *malloc_checked(unsigned int b)
{
	void *ar;


	ar = malloc(b);

	if ( ar == NULL)
	{
		exit(98);
		return (0);
	}
	return (ar);
}
