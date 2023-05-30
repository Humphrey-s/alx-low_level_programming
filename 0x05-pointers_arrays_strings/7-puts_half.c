#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: (Success)
 */
void puts_half(char *str)
{
	int n, b;

	for (b = 0; str[b] != '\0';)
	{
		str++;
		b++;
	}
	if (b % 3 != 0 && b != 0)
	{
		n = (b - 1) / 2;

		for (; n <= b; n++)
		{
			_putchar(str[n]);
		}
	}
	else if (b % 2  == 0)
	{
		n = b / 2;

	for (; n <= b; n++)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
