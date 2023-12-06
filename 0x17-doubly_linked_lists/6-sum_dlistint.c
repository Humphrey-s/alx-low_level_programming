#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - adds all the integers in a linked lists
 * @head: first node of linked list
 * Return: (sum of all integers)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;

		ptr = ptr->next;
	}

	if (head == NULL)
	{
		return (sum);
	}
	return (sum);
}
