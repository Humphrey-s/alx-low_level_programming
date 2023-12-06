#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - print sum of parameters
 * @n: number of arguments
 * Return: (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(list, n);

	if (n == 0)
	{
	return (0);
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);
	}
}
