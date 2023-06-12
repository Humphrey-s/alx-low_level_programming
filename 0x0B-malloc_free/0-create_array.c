#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - create array and initilize the first to a specific character
 * @size: number of bytes
 * @c: specific character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
	return (NULL);
	}
	else
	{
	ptr = malloc(sizeof(unsigned int) * size);
	memset(ptr, c, size);
	return (ptr);
	}
}
