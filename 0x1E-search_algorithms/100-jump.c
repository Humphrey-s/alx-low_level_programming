#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - jump search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: return first index where value is allocated
 *         else -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump_step = sqrt(size);
	size_t j;

	if (!array)
		return (-1);

	for (j = jump_step; j <= (size + 1) && i < size; j = j + jump_step)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[j] >= value || j >= size)
			break;
		i = j;

	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	while (i <= j && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i++;
	}

return (-1);
}
