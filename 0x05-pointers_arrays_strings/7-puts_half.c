#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: (Success)
 */
void puts_half(char *str)
{
	int n = 0;


	while (str[n] != '\0')
		n++;

	if (n % 2 != 0)
	{
	n = (n - 1) / 2;
	}
	else
	{
	n = n / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
