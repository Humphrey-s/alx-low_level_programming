#include <stdio.h>
#include  "search_algos.h"
size_t get_position(int *array, size_t low, size_t high, int value);
/**
 * interpolation_search - interpolation search algorithm
 * @array: array
 * @size: size of array
 * @value: value to be found
 * Return: index of value else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	pos = get_position(array, 0, size - 1, value);

	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);


	if (array[pos] < value)
		low = pos + 1;
	if (array[pos] > value)
		high = pos - 1;

	while (pos < high)
	{
		pos = get_position(array, low, high, value);
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;

		if (array[pos] > value)
			high = pos - 1;
	}

return (-1);
}
/**
 * get_position - returns probable position of value
 * @array: array
 * @low: start of array
 * @high: end of array
 * @value: value to be found
 * Return: probable position of value
 */
size_t get_position(int *array, size_t low, size_t high, int value)
{
	size_t division = ((double)(high - low)) / (array[high] - array[low]);
	size_t multiplication = division * (value - array[low]);
	size_t pos = low + multiplication;

	return (pos);
}
