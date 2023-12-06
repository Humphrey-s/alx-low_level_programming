#include "calc.h"
/**
 * opp_add - returns the sum of a and b
 * @a: integer
 * @b: integer
 * Return: (Success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: integer
 * @b: integer
 * Return: (success)
 */
int op_sub(int a, int b)
{
	if (a > b)
	{
	return (a - b);
	}
	else
	{
	return (b - a);
	}
}
/**
 * op_mul - multiplies a and b
 * @a: integer
 * @b: integer
 * Return: (Success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: integer
 * @b: integer
 * Return: (Success)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of division of a by b
 * @a: integer
 * @b: integer
 * Return: (Success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
