#include <stdio.h>
#include "search_algos.h"
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
int binary_search2(int *array, size_t left, size_t size, int value);
/**
 * exponential_search - exponential search algorithm
 * @array: array
 * @size: size of array
 * @value: value to be found
 * Return: index of value else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t high;

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	high = MIN(bound + 1, size);
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, high - 1);

	return (binary_search2(array, bound / 2, high, value));
}
/**
 * binary_search2 - searches usin binary search algorithm
 * @array: array
 * @left: lower boundary
 * @size: size of array
 * @value: value to search
 * Return: index of value else -1 if not found
 */
int binary_search2(int *array, size_t left, size_t size, int value)
{

	size_t i;
	size_t right = size;

	if (array == NULL)
		return (-1);

	for (right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + ((right - left) / 2);

		if (array[i] == value)
		{
			return (i);
		}

		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}
return (-1);
}
