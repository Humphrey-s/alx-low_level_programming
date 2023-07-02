#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_first - write or print before printf
 * Return: (Success)
 */
void print_first(void) __attribute__ ((constructor));
void print_first(void)
{

char *str1 = "You're beat! and yet, you must allow,\n";
char *str2 = "I bore my house upon my back!\n";

	printf("%s", str1);
	printf("%s", str2);
}
