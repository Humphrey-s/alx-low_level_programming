#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - print binary
 * @n: number
 * Return: (Success)
 */
void print_binary(unsigned long int n)
{

   unsigned int hex = 0x8000;
   
   while (hex != 0)
   {
	   if ((n & hex) == 0)
	   {
		   _putchar('0');
	   }
	   else
	   {
		_putchar('1');
	   }
	   hex = hex >> 1;
   }
}	
