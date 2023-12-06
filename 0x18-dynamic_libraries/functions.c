#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 * Return: (Success)
 */
void _puts(char *str)
{
	int a = 0;

	for (; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
#include "main.h"
/**
 * _strncat - appends certain number of characters
 * @src: string to be appended
 * @dest: string where it is to be appended
 * @n: number of bytes to be appended
 * Return:
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	char *p;

	p = dest;

	for (a = 0; p[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n; b++)
	{
		*(p + a + b) = *(src + b);
	}
	b = b + 1;
	*(p + a + b) = '\0';
return (dest);
}
#include <stdio.h>
/**
 * _strcat - appends a string to another overwriting the 0 byte
 * @src: string to be appended
 * @dest: where it is to be appended
 * Return: (Success)
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	char *p;

	p = dest;

	for (a = 0; p[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		*(p + a + b) = *(src + b);
	}
	*(p + a + b + 1) = '\0';
return (dest);
}
#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: Character to be located
 * Return: (Success)
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != c)
		{
		continue;
		}
		else
		{
		break;
		}
	}
	b = b + 0;

	if (s[b] == c)
	{
		return (s + b);
	}
	else
	{
		return (NULL);
	}
}
