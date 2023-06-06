#include "main.h"
/**
 * _strpbrk - prints out the characters
 * @s: string
 * @accept: substring
 * Return: (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;
	char z;

	char *p;

	p = &z;

	while (*s)
	{

	for (b = 0; accept[b] != '\0'; b++)
	{
		if (*s == accept[b])
		return (s);
	}
	p++;
	s++;
	}
return ('\0');
}
