#include "main.h"
/**
 * _strncat - appends certain number of characters
 * @src: string to be appended
 * @dest: string where it is to be appended
 * @n: number of bytes to be appended
 * Return:
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	char *p;

	p = dest;

	for (a = 0; p[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n; b++)
	{
		*(p + a + b) = *(src + b);
	}
	b = b + 1;
	*(p + a + b) = '\0';
return (dest);
}
