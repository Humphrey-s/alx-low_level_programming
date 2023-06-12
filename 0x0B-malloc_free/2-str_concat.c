#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - append a string to another in allocated memory
 * @s1: string to be appended to
 * @s2: string to be appended
 * Return: (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int a, b, z;

	b = strlen(s1);
	a = strlen(s2);
	z = a + b;

	p = malloc(sizeof(char) * z);

	if (p == NULL)
	{
	return (NULL);
	}
	else
	{
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
	}
}
