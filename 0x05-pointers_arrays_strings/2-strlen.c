#include "main.h"
/**
 * _strlen - determines length of string
 * @s: string
 * Return: (Success)
 */
int _strlen(char *s)
{
	int a;

	while (s[a])
	{
		a++;
	}
	return (a);
}
