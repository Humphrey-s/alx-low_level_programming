#include "main.h"
/**
 * print_line - print lines according to n
 * @n: length of line
 * Return: (Success)
 */
void print_line(int n)
{
	if (n < 1)
	{
	}
	else if (n >= 1)
	{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	}
	else
	{
	}
	_putchar(36);
	_putchar('\n');
}
