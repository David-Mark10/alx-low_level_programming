#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	if (grid == NULL)
		return;
	while (j < height)
		free((int *)grid[j++]);
	free(grid);
}
