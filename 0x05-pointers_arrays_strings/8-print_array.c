#include "main.h"
/**
 * print_array - print array
 * @a: pointer to array
 * @n: number of elements to be printed
 * Return (Success)
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b <= n; b++)
	{
		_putchar(a[b]);
		_putchar(',');
	}
	_putchar('\n');
}
