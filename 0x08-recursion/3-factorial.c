#include "main.h"
/**
 * factorial - returns factorial of a certain number
 * @n: number
 * Return: (Success)
 */
int factorial(int n)
{
	int b;

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		if (n == 1)
		{
		return (1);
		}
		else
		{
		b = n * factorial(n - 1);
		return (b);
		}
	}
	else
	{
	return (0);
	}
}

