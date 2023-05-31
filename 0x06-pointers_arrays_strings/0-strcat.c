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


	for (a = 0; dest[a] != '\0'; a++)
	{
		dest++;
	}
	p = dest;
	p++;
	p++;
	p++;
	for (b = 0; src[b] != '\0'; b++)
	{
		*p++ = *src++;
	}
	*p = '\0';
return (dest);
}
