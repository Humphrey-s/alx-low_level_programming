#include "main.h"
/**
 * reverse_array - reverses array
 * @a: array
 * @n: number of elements in array
 * Return: (Success)
 */
void reverse_array(int *a, int n)
{
	int b, d;

	int *p;

	p = a;
	d = n / 2;

	for (b = 0; b <= d; b++)
	{
		p[b] = a[n - 1];
		n--;
	}
}
