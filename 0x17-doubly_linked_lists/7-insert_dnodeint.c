#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert node at certain index
 * @h: address of a linked list
 * @idx: index of node
 * @a: integer value of new node
 * Return: (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int a)
{
	dlistint_t *new_node;
	dlistint_t *prev_n;
	dlistint_t *nth;
	/*dlistint_t *ptr2;*/
	dlistint_t *ptr = *h;
	size_t i;

	if ((*h == NULL) | (idx == 0))
	{
		add_dnodeint(&ptr, a);
	}
	i = dlistint_len(ptr);

	if (idx > i)
	{
		return (NULL);
	}

	if (idx == i)
	{
		add_dnodeint_end(&ptr, a);
	}
	new_node = malloc(sizeof(dlistint_t));
	/*i = dlistint_len(*h);*/

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = a;

	nth = get_dnodeint_at_index(*h, idx);
	prev_n = get_dnodeint_at_index(*h, idx - 1);

	prev_n->next = new_node;
	new_node->prev = prev_n;
	new_node->next = nth;
	nth->prev = new_node;
return (new_node);
}
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
