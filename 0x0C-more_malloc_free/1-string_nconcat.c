#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - returns a concatenated string allocated to memory
 * @s1: 1st string.l
 * @s2: strinf to be appended
 * @n: number of bytes to be appended
 * Return: (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	ptr = malloc((sizeof(s1)) + n);

	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	else
	{
	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);
	}
}
