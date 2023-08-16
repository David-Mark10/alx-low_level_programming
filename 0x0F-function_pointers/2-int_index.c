#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compared values
 * @array: is a array of element
 * return: return -1 if no element matches
 * Return: point to the first coresponding element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = array[i];

		if (cmp(j) !=  '\0')
			return (i);
	}
	return (-1);
}
