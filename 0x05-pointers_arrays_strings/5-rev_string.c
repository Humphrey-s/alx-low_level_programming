#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 * Return: (Success)
 */
void rev_string(char *s)
{
	int b;

	char *c;

	c = s;

	for (b = 0; s[b] != '\0';)
	{
		s++;
		b++;
	}
	*c = s[b];
	s = c;
}
