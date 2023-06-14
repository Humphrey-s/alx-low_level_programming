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
