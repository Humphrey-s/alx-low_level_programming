#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: string
 * Return: (Success)
 */
void rev_string(char *s)
{
	char p;
	int a, b = 0;

	p = s[0];

	while (s[b] != '\0')
		b++;

	for (a = 0; a < b; a++)
	{
		b--;

		p = s[a];
		s[a] = s[b];
		s[b] = p;
	}
}
