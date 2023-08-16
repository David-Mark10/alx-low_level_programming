#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to be used
 * @size: the size of array
 * @action: funtion pointer to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	int j;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		j = array[i];
		action(j);
	}
}
