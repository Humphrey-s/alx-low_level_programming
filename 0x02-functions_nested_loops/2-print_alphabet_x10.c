#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * @void: parameters
 * Return: On Success return 0
 */
void print_alphabet_x10(void)
{
	int a = 0, b;

	for (; a <= 9; a++)
	{
	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
	}
return;
}
