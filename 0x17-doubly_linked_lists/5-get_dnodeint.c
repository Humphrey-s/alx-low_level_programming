#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - return the nth node of a linked list
 * @head: head of a linked lists
 * @index: index of node
 * Return: (Success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int n = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (ptr != NULL)
	{
		if (n == index)
		{
			break;
		}
		ptr = ptr->next;
		n++;
	}

	if (n < index)
	{
		return (NULL);
	}

return (ptr);
}
