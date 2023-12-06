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
	int b;

	for (b = 0; b < argc; b++)
	{
	printf("%s\n", *(argv + b));
	}
return (0);
}
