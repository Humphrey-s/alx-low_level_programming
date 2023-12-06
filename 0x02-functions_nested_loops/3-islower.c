#include "main.h"
/**
 * _islower - identify lowercase characters
 * @c: character to be identified
 * Return: on success return 1 and if fail return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
