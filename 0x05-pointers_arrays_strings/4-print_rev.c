#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Return: (Success)
 */
void print_rev(char *s)
{
	int b, a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = a;

	while(s[b])
	{
		_putchar(s[b]);
		b--;
	}
}
