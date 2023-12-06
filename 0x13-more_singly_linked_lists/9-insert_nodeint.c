#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at a specific location index
 * @head: pointer to first node of list
 * @idx: index
 * @n: integer of new node
 * Return: (Success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *new = NULL;
	listint_t *ptr = *head;
	listint_t *ptr1;


	new = malloc(sizeof(listint_t));

	if ((new == NULL) || (ptr == NULL))
	{
		return (NULL);
	}
	else
	{
		new->n = n;

		if (idx == 0)
		{
			ptr->next = new;
			new->next = ptr->next->next;
			return (new);
		}
		else
		{
		while (i < (idx - 1))
		{
			ptr = ptr->next;
			i++;
		}

		ptr1 = ptr->next;
		new->next = ptr1;
		ptr->next = new;

		return (new);
		}

	}
}
