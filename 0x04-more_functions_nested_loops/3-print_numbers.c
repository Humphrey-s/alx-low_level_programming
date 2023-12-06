#include "main.h"
/**
 * print_numbers - print numbers
 * @void: parameters
 * Return: On success return 1 fail return 0
 */
void print_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
