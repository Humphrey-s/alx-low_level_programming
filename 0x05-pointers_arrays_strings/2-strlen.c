#include "main.h"
/**
 * _strlen - determines length of string
 * @s: string
 * Return: (Success)
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}
