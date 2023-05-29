#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Return: (Success)
 */
void print_rev(char *s)
{
	char *str = s;
	int b;


	while (*str)
	str++;
	b = str - s;
	while (b >= 0)
	{
		_putchar(str[b]);
	}
}
