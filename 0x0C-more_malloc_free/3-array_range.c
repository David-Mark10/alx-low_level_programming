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
	int i, j, n;

	if (min > max)
		return (0);

	if (max > min)
		n = max - min + 1;

	else if (max == min)
		n = 2;

	ptrint = malloc(sizeof(int) * n);

	if (ptrint == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		ptrint[i] = j;

	if (max == min)
		ptrint[i] = max;

	return (ptrint);
}
