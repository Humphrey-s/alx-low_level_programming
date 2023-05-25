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
	else if (n > 1)
	{
		n = n + 1;
	for (; n >= 1; n--)
	{
		_putchar('_');
	}
	}
	else
	{
	}
	_putchar(92);
	_putchar('n');
	_putchar('\n');
}
