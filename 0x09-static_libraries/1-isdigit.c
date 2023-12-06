#include "main.h"
/**
 * _isdigit - identify digits
 * @c: character
 * Return: On success return 1 fail return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
