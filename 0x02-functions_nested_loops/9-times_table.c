#include "main.h"
/**
 * times_table - print times table upto 9
 * @void: parameter
 * Return: On success return 1 on error return 0
 */
void times_table(void)
{
	int a, b, c;

	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 9; c++)
	{
	for (a = 0; a <= 9; a++)
	{
		_putchar(48 + b);
		_putchar(48 + b + c);
	}
	_putchar('\n');
	}
	}
}
