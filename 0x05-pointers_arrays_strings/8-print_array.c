#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: pointer to array
 * @n: number of elements to be printed
 * Return (Success)
 */
void print_array(int *a, int n)
{
	int b = 0;
	int c = n - 1;

	for (; b <= c; b++)
	{
		printf("%d", *a++);
		if (b != c)
		{
		printf(", ");
		}
	}
	printf("\n");
}
