#include "main.h"
/**
 * _memcpy - copy bytes from memory area src to dest
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 * @n: number of bytes to copied
 * Return: (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *p;

	p = dest;
	
	for (a = 0; a < n; a++)
	{
		*(p + a) = *(src + a);
	}
return (dest);
}
