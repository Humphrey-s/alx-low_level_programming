#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments itself
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, a;

		if (argc < 2)
		{
		return (0);
		}
		else
		{
		for (a = 1; a < argc; a++)
		{
		sum += atoi(*(argv + a));
		}
		printf("%d\n", sum);
		}
return (0);
}
