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
	}
	else if (n > 0)
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
