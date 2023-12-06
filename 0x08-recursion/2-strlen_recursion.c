#include "main.h"
/**
 * _strlen_recursion - find length of string
 * @s: string
 * Return: (Success)
 */
int _strlen_recursion(char *s)
{
	int b = 0;

	if (s[b] == '\0')
	{
		return (b);
	}
	else
	{
	s++;
	b = _strlen_recursion(s);
	b++;
	return (b);
	}
}
