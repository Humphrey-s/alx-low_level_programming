#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a specific index
 * @head: pointer to first node of list
 * @index: index of node to be retributed
 * Return: (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *atemp, *ptr = *head;

	if (ptr == NULL)
	{
		return (-1);
	}
	else
	{
		if (index == 0)
		{
			temp = (*head)->next;
			free(ptr);
			*head = temp;
		}
		else
		{
		while (i < (index - 1))
		{
			ptr = ptr->next;
			i++;
		}

		temp = ptr;
		atemp = ptr->next->next;
		free(ptr->next);
		ptr = temp;
		ptr->next = atemp;
		}

		if (ptr == NULL)
		{
			return (-1);
		}
		else
		{
		return (1);
		}
	}
}
