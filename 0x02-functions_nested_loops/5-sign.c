#include "main.h"
/**
 * print_sign - print sign of digits
 * @n: digit to be clarified
 * Return: On success return 1 fail return 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
