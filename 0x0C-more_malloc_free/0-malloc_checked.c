#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	free(ptr);
	exit(98);
	}
	else
	{
	return (ptr);
	}
}
