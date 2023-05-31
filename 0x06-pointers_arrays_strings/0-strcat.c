#include <stdio.h>
/**
 * _strcat - appends a string to another overwriting the 0 byte
 * @src: string to be appended
 * @dest: where it is to be appended
 * Return: (Success)
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	char *p;

	p = dest;

	for (a = 0; p[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		*(p + a + b) = *(src + b);
	}
	*(p + a + b + 1) = '\0';
return (dest);
}
