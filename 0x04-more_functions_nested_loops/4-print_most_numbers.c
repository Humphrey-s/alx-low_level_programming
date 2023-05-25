#include "main.h"
/**
 * print_most_numbers - print all except 2 and 4
 * @void: parameters
 * Return: On success return 1 fail return 0
 */
void print_most_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		if ((d < 50) || (d > 50 && d < 52) || (d > 52))
		{
			_putchar(d);
		}
	}
	_putchar('\n');
}
