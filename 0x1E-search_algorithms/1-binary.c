#include <stdio.h>
#include "search_algos.h"
#define UNUSED __attribute__((unused))
/**
 * binary_search - search using Binary search
 * @array: array
 * @size: size of array
 * @value: value to be found
 * Return: first index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	UNUSED size_t i = 0;
	size_t mid = 0 + (size / 2);

	searching_in(array, 0, size);

	if (array == NULL)
		return (-1);

	if (size == 1)
		return (0);

	if (size % 2 == 0)
	{
		if (array[mid] > value)
		{
			i = binary_search2(array, 0, mid - 1, value);
		}
		else
		{
			i = binary_search2(array, mid, size, value);
		}
	}
	else
	{
		if (array[mid] > value)
		{
			i = binary_search2(array, 0, mid - 1, value);
		}
		else
		{
			i = binary_search2(array, mid, size, value);
		}

	}

	if (i == size || array[i] != value)
		return (-1);

return (i);
}
/**
 * binary_search2 - binary search helper
 * @array: array
 * @from: where to start search
 * @to: where to stop
 * @value: value to be searched
 * Return: index of array containing value
 */
int binary_search2(int *array, size_t from, size_t to, int value)
{
	size_t size = to - from;
	size_t mid = from + (size / 2);

	searching_in(array, from, to);

	if (size == 1 || size == 0)
		return (from);

	if (size % 2 == 0)
	{
		if (array[mid] > value)
		{
			return (binary_search2(array, from, mid, value));
		}
		else
		{
			return (binary_search2(array, mid, to, value));
		}
	}
	else
	{
		if (array[mid] > value)
		{
			return (binary_search2(array, from, mid, value));
		}
		else
		{
			return (binary_search2(array, mid + 1, to, value));
		}
	}
}
/**
 * searching_in - prints the array fragment being searched
 * @array: array
 * @from: where to start
 * @to: where to stop
 * Return: (Success)
 */
void searching_in(int *array, size_t from, size_t to)
{
	size_t i = from;

	printf("searching in array: ");

	while (i < to)
	{
		printf("%d", array[i]);
		if (i + 1 != to)
			printf(", ");
		i++;
	}
	printf("\n");
}
