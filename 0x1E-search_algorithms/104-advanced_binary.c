#include "search_algos.h"
#include <stdio.h>
int recursive_search(int *array, size_t size, int value);
/**
 * recursive_search - binary search by recursion
 * @array: array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t bound = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	}

	printf("\n");

	if (bound == 0 && size % 2 == 0)
		bound = bound - 1;

	if (value == array[bound])
	{
		if (bound > 0)
			return (recursive_search(array, bound + 1, value));
		return ((int)bound);
	}

	if (value < array[bound])
		return (recursive_search(array, bound + 1, value));

	bound++;
return (recursive_search(array + bound, size - bound, value) + bound);
}

/**
 * advanced_binary - calls to rec_search to return
 * @array: array
 * @size: size of the array
 * @value: value to be found
 * Return: index of value else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

return (index);
}
