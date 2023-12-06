#include "main.h"
/**
 * more_numbers - print numbers on multiple lines
 * @void: parameters
 * Return: (Success)
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
		c = b % 10;
		if (b > 9)
		{
			_putchar('1');
		}
		_putchar(c + 48);
	}
	_putchar('\n');
	}
}
