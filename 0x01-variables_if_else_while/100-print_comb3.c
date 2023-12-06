#include <stdio.h>
/**
 * main - Entry point
 * Return: (0);
 */
int main(void)
{
	int a = 48, b;

	for (; a <= 57; a++)
	{
		b = a + 1;
		for (; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
