#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements
 * @cmp: function to be executed when searching for an integer
 * Return: (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr)(int) = cmp;

	int i = 0;
	int b;

	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
		{
		b = i;
		break;
		}
		else if (i + 1 == size)
		{
		b = -1;
		}
	}
return (b);
}
