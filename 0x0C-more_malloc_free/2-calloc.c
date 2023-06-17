#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory and initiallizes it to zero
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	else
	{
	memset(ptr, '0', nmemb);
	return (ptr);
	}
}
