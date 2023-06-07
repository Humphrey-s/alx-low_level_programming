#include "main.h"
#include "string.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: (Success)
 */
void _print_rev_recursion(char *s)
{
	int a = 0, b;
	b = strlen(s);

	if (a > b)
	{
		_putchar('\0');
	}
	else
	{
		_putchar(s[b]);
		b--;
		_print_rev_recursion(s);
	}
}
