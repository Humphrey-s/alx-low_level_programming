#include <stdio.h>
/**
 * main - Entry point
 * Return: (0);
 */
int main(void)
{
	int a = 48, b, c;

	for (; a <= 57; a++)
	{
		b = a + 1;
		for (; b <= 57; b++)
		{
			c = b + 1;
			for (; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
