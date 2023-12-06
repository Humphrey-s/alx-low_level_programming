#include "function_pointers.h"

/**
 * print_name - calls f to print name
 * @name: name to be printed
 * @f: a function that prints a name
 * Return: (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *) = f;

	ptr(name);
}
