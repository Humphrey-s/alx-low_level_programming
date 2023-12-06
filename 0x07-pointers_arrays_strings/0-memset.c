#include "main.h"
/**
 * _memset - replaces n number of memory with constant bytes
 * @s: pointer that points to a memory area
 * @n: number of bytes in the area pointed to by s to be replaced
 * @b: character to placed in the memory pointed to by s
 * Return: (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0;a < n; a++)
	{
		*(s + a) = b;
	}
return (s);
}
