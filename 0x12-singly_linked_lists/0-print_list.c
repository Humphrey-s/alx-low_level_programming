#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - print elements of a list
 * @h: linked lists
 * Return: (Success)
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
return (i);
}
