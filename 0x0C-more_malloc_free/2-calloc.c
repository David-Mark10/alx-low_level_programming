#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: the number of elements
*@size: the size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrvd;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptrvd = malloc(nmemb * size);
	if (ptrvd != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			ptrvd[i] = 0;
		return (ptrvd);
	}
	else
		return (NULL);
}
