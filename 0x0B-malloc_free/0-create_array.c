#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * create_array - create array and initilize the first to a specific character
 * @size: number of bytes
 * @c: specific character
 * Return: (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
	return (NULL);
	}
	else if (ptr == NULL)
	{
	return (NULL);
	}
	else
	{
	ptr = malloc(sizeof(char) * size);
	memset(ptr, c, size);

	return (ptr);
	}
}
