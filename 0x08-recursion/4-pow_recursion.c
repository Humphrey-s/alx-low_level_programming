#include "main.h"
/**
 * _pow_recursion - returns x^y
 * @x: main number
 * @y: power
 * Return: (Success)
 */
int _pow_recursion(int x, int y)
{
	int b;

	b = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		if (y == 1)
		{
			return (b);
		}
		else
		{
			b = b * x;
			y--;
			b = _pow_recursion(x, y);
			b = b * x;
			return (b);
		}
	}
	else
	{
	return (1);
	}
}

