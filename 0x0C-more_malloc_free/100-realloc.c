#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

/**
* _realloc - to reallocates a memory block
* @ptr: the pointer to the memory previously allocated with a call to malloc
* @old_size: the size of ptr
* @new_size: the size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrvd;
	unsigned int i;

	if (ptr == NULL)
	{
		ptrvd = malloc(new_size);
		return (ptrvd);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptrvd = malloc(new_size);
		if (ptrvd != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)ptrvd + i) = *((char *) ptr + i);
			free(ptr);
			return (ptrvd);
		}
		else
			return (NULL);
	}
}
