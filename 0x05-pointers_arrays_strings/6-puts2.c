#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string
 * Return (Success0
 */
void puts2(char *str)
{
	int a = 0;


	while (str[a])
	{
		_putchar(str[a]);
		++a;
		++a;
	}
	_putchar('\n');
}
