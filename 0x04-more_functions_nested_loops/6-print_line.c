#include "main.h"
/**
 * print_line - print lines according to n
 * @n: length of line
 * Return: (Success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(92);
		_putchar('n');
	}
	else if (n > 0)
	{
	for (; n >= 1; n--)
	{
		_putchar(95);
	}
		_putchar(92);
		_putchar('n');
	}
	else
	{
	}
	_putchar('\n');
}
