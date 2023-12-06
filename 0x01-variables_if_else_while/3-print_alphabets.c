#include <stdio.h>
/**
 * main - Entry point
 * Return: (Success)
 */
int main(void)
{
	int b = 97, s = 65;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	while (s <= 90)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
