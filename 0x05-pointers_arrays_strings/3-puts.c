#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 * Return: (Success)
 */
void _puts(char *str)
{
	int a = 0;

	for (; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
