#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all elements of a list
 * @h: pointer to a linked list
 * Return: (Success)
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

return (i);
}
