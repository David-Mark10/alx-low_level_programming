#include "main.h"
#include <stdlib.h>
/**
 * _create_array - to create an array of char
 * @size: the number of argument
 * #c: the value of argument entered
 * return: null if pointer is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar =(char *)malloc(size * (sizeof(char)));

	for (i = 0; i < size; i++)
		ar[i] = c;

	return(ar);
}
