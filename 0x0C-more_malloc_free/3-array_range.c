#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* array_range - this will create an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *ptrint;
	int i, j = 0;

	if (min > max)
		return (NULL);
	ptrint = malloc(sizeof(ptrint) * ((max - min) + 1));
	if (ptrint != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ptrint[j] = i;
			j++;
		}
		return (ptrint);
	}
	else
		return (NULL);

}
