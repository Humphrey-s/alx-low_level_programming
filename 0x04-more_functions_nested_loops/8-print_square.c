#include "main.h"
/**
 * print_square - print square
 * @size: length or number of #
 * Return: (Success)
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (b = 0; b < size; b++)
	{
	for (a = 0; a < size; a++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
	}
}
