#include <stdio.h>
/**
 * main - Entry point
 * Return: (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 15 == 0 && a != 0)
	{
		printf("FizzBuzz ");
	}
	else if (a % 3 == 0 && a != 0)
	{
		printf("Fizz ");
	}
	else if (a % 5 == 0 && a != 0)
	{
		printf("Buzz ");
	}
	else
	{
		if (a != 100)
		{
			printf("%d ", a);
		}
		else
		{
			printf("%d", a);
		}
	}
	}
	printf("\n");
return (0);
}
