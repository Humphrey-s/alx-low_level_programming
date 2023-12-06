#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: Character to be located
 * Return: (Success)
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != c)
		{
		continue;
		}
		else
		{
		break;
		}
	}
	b = b + 0;

	if (s[b] == c)
	{
		return (s + b);
	}
	else
	{
		return (NULL);
	}
}
