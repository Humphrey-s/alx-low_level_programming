#include "calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments itself
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	int d;

	if ((argc < 3) || (argc > 4))
	{
	printf("error\n");
	exit(98);
	}
	else
	{
	d = get_op_func(*(argv + 2))(atoi(*(argv + 1)), atoi(*(argv + 3)));

	printf("%d\n", d);
	}
return (0);
}
