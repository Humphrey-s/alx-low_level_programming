#include <stdio.h>
#include <unistd.h>
#include "lists.h"
/**
 * print_dlistint - print elements of a double linked lists
 * @h: pointer to head of a double linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

return (i);
}
