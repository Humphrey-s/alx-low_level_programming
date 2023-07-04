#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to first node of lists
 * @index: the nth position of node
 * Return: (Success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		return (head);
	}
	}
}
