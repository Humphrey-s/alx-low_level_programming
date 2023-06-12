#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * _strdup - puts a copy of a string in a newly allocated memory
 * @str: string
 * Return: (Success)
 */
char *_strdup(char *str)
{
	char *p;
	int b;

	b = strlen(str);
	p = malloc(sizeof(char) * b);

	if (p == NULL)
	{
	return (NULL);
	}
	else
	{
	strncpy(p, str, b);

	return (p);
	}
}
