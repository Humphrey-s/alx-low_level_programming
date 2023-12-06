#include "main.h"
/**
 * _strspn - find the character in substring that is furthest
 * @s: string
 * @accept: substring
 * Return: (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	while (*s)
	{

	for (a = 0; accept[a] != '\0'; a++)
	{
	if (*s == accept[a])
	{
		b++;
		break;
	}
	else if (accept[a + 1] == '\0')
	return (b);
	}
	s++;
	}
return (b);
}
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
#include "main.h"
/**
 * _isupper - identify characters
 * @c: character to be checked
 * Return: On success return 1 on error return p
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 * _isdigit - identify digits
 * @c: character
 * Return: On success return 1 fail return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 * _islower - identify lowercase characters
 * @c: character to be identified
 * Return: on success return 1 and if fail return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 * _abs - print absolute value
 * @b: integer to be printed
 * Return: On success return 1 fail return 0
 */
int _abs(int b)
{
	if (b < 0)
	{
		b = b * -1;
		return (b);
	}
	else if (b > 0)
	{
		return (b);
	}
	else
	{
		return (b);
	}
}
#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int b;

	while (*haystack)
	{

	for (b = 0; needle[b] != '\0'; b++)
	{
		if (*haystack == needle[b] && *(haystack + 1) == needle[b + 1] && *(haystack + 2) == needle[b + 2])
		return (haystack);
	}
	haystack++;
	}
return ('\0');
}
