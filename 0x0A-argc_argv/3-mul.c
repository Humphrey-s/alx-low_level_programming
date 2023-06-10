#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments itself
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	int product;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		product = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", product);
		return (0);
	}
}
