#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps integers
 * @b: integer to be swapped
 * @a: integer to be swapped
 * Return: (Success)
 */
void swap_int(int *a, int *b)
{
	int num, num1;

	num = *a;
	num1 = *b;
	*a = num1;
	*b = num;
}
