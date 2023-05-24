#include "main.h"
/**
 * jack_bauer - print time
 * @void: parameter
 * Return: On success return 1 fail return 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 1; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		_putchar(48 + a);
		_putchar(48 + b);
		_putchar(':');
		_putchar(48 + c);
		_putchar(48 + d);
		_putchar('\n');
	}
	}
	}
	}
	for (b = 0; b <= 3; b++)
	{
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		_putchar(48 + 2);
		_putchar(48 + b);
		_putchar(':');
		_putchar(48 + c);
		_putchar(48 + d);
		_putchar('\n');
	}
	}
	}
return;
}
