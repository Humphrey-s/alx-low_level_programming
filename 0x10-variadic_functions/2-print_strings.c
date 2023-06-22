#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: char separating the strings
 * @n: number of strings
 * Return: (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	va_start(list, n);

	if (n == 0)
	{
	printf("nil");
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char *));

		if (separator == NULL)
		{
		}
		else if (i != n - 1)
		{
		printf("%s", separator);
		}
		else
		{
		}
	}
	}
	va_end(list);
	printf("\n");
}
