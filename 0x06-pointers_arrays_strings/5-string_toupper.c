 #include "main.h"
/**
 * string_toupper - changes all lowercase to uppercasi
 * @s: string to be changed
 * Return: (Success)
 */
char *string_toupper(char *s)
{
	int b;
	char *p;

	p = s;
	for (b = 0; p[b] !=  '\0'; b++)
	{
		if (p[b] >= 'a' && p[b] <= 'z')
		{
			*s++ = p[b] - 32;
		}
		else
		{
			*s++ = p[b] - 0;
		}

	}
return (s);
}

