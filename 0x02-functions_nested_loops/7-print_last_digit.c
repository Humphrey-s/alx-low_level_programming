#include "main.h"
/**
 * print_last_digit - print last digit
 * @b: the digit
 * Return: on success return 1 fail return 0
 */
int print_last_digit(int b)
{
	int c;

	c = b % 10;

	if (c < 0)
	{
		c = c * -1;
		_putchar(48 + c);
		return (c);
	}
	else if (c > 0)
	{
		_putchar(48 + c);
		return (c);
	}
	else
	{
		_putchar(48);
		return (c);
	}
}
