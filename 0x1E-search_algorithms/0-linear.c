#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - search using linear algorithm
 * @array: array
 * @size: size of array
 * @value: value to be found
 * Return: first index where @value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int b = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (b);
		i++;
		b++;
	}
return (-1);
}
