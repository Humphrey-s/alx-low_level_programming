#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees memory previously allocated
 * @grid: 2d pointer returned by malloc
 * @height: number of arrays
 * Return: (Success)
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	for (h = 0; h <= height; h++)
	{
	free(grid[h]);
	}
	free(grid);
}
