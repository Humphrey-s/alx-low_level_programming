#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: the char that separates numbers
 * @n: number of arguments
 * Return: (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));

		if (separator == NULL)
		{
		}
		else if (i == n - 1)
		{
			printf("\n");
		}
		else
		{
		printf("%s", separator);
		}
	}
	va_end(list);
}
