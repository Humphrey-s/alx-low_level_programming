#include <stdio.h>
/**
 * main - Entry point
 * Return: (Success)
 */
int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		if (b != 101 && b != 113)
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');
	return (0);
}
