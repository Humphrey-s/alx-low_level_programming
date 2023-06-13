#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @height: number of arrays
 * @width: number of elements in an array
 * Return: (Success)
 */
int **alloc_grid(int width, int height)
{
	int **ptr;

	int h = 0;

	ptr = malloc(height * sizeof(int *));

	if ((height < 1) || (width < 1))
	{
	free(ptr);
	return (NULL);
	}
	else if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	else
	{
	ptr = malloc(height * sizeof(int *));

	for (h = 0; h < height; h++)
	{

	ptr[h] = malloc(width * sizeof(int));
	}
	return (ptr);
	}
}
