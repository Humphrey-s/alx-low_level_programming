#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * binary_to_uint - convert binary to decimal
 * @b: digit
 * Return: (Success)
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	int i = 0;
	int bnum = atoi(b);
	unsigned int num = 0;

	if ((b == NULL) || (b[0] < '0' && b[0] < '1'))
	{
		return (0);
	}
	else
	{
	while (bnum != 0)
	{
		a = bnum % 10;
		bnum = bnum / 10;
		num += a * _pow(2, i);
		i++;
	}
	return (num);
	}
}

#include "main.h"
/**
 * _pow - returns x^y
 * @x: main number
 * @y: power
 * Return: (Success)
 */
int _pow(int x, int y)
{
	int b = x;

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
			b = _pow(x, y);
			b = b * x;
			return (b);
		}
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
