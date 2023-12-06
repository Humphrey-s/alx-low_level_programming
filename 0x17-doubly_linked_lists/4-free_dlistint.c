#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * free_dlistint - frees a doubly linked lists
 *
 * @head: first node of doubly linked list to be freed
 * Return: (Success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *ptr2;

	while (ptr != NULL)
	{
		ptr2 = ptr->next;

		free(ptr);

		ptr = ptr2;
	}
}
