#include "main.h"
/**
 * _isupper - identify characters
 * @c: character to be checked
 * Return: On success return 1 on error return p
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
