#include "main.h"
/**
 * _strncpy - copies string
 * @dest: where it is to be copied
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b, a, c;

	char *p;

	p = dest;

	for (a = 0; src[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		*(p + b) = *(src + b);
	}
	
	if (a < n)
	{
		c = a - n;
	for (; src[c]; c++)
	{
		*(p + b + c + 1) = '\0';
	}
	}
return (dest);
}
