#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabets
 * @void: parameter
 * Return: on success return 0
 */
void print_alphabet(void)
{
	int b = 97;

	while (b <= 122)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
return;
}
