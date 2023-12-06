#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 * Return: (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int) = action;

	size_t i = 0;

	for (i = 0; i < size; i++)
	{
	ptr(array[i]);
	}
}
