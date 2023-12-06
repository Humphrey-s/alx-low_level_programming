#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: number to be counted from
 * Return: On success return 0
 */
void print_to_98(int n)
{
	int a, b, c, d, e, f, g, h, i, z;

	for (; n <= 98; n++)
	{
		while (n > -10 && n < 0)
		{
			n = n * -1;
			_putchar(n +  48);
			n--;
		}
		if (n <= -10 && n > -100)
		{
			n = n * -1;
			i = n / 10;
			e = n % 10;
			_putchar('-');
			_putchar(i + 48);
			_putchar(e + 48);
		}
		else if (n >= 0 && n <= 9)
		{
			_putchar(n + 48);
		}
		else if (n > 9 && n <= 98)
		{
			i = n / 10;
			e = n % 10;
			_putchar(i + 48);
			_putchar(e + 48);
		}
		else
		{
		}
		_putchar(',');
		_putchar(' ');
	}
	for (; n >= 98; n--)
	{
		if (n < 100)
		{
			i = n / 10;
			e = n % 10;
			_putchar(i + 48);
			_putchar(e + 48);
		}
		else if (n >= 1000 && n < 10000)
		{
			a = n / 1000;
			b = n % 1000;
			c = b / 100;
			d = b % 100;
			z = d / 10;
			e = n % 10;
			_putchar(a + 48);
			_putchar(c + 48);
			_putchar(z + 48);
			_putchar(e + 48);
		}
		else if (n >= 100 && n < 1000)
		{
			f = n / 100;
			g = n % 100;
			h = g / 10;
			e = n % 10;
			_putchar(f + 48);
			_putchar(h + 48);
			_putchar(e + 48);
		}
		else
		{
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
