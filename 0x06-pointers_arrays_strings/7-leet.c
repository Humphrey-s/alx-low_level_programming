#include "main.h"
/**
 * leet - encodes string the leet way
 * @s: string
 * Return: (Success)
 */
char *leet(char *s)
{
	int b;

	char *p;

	p = s;

	for (b = 0; p[b] != '\0'; b++)
	{
		if ((p[b] == 'a') | (p[b] == 'A'))
		{
			p[b] = '4';
		}
		else if ((p[b] == 'e') | (p[b] == 'E'))
		{
			p[b] = '3';
		}
		else if ((p[b] == 'o') | (p[b] == 'O'))
		{
			p[b] = '0';
		}
		else if ((p[b] == 't') | (p[b] == 'T'))
		{
			p[b] = '7';
		}
		else if ((p[b] == 'l') | (p[b] == 'L'))
		{
			p[b] = '1';
		}
		else
		{
			p[b] = s[b];
		}
	}
return (s);
}
