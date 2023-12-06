#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Return: (Success)
 */
void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	b = b - 1;

	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
