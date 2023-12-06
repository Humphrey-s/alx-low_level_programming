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
