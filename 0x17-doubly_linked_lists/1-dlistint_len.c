#include <stdio.h>
#include <unistd.h>
#include "lists.h"
/**
 * dlistint_len - returns no of elements in a linked list
 * @h: head pointer of a linked list
 * Return: (Success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h->prev == NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}

return (i);
}
