#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - free a list and set it to NULL
 * @head: pointer to a linked list
 * Return: (Success)
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		while (*head != NULL)
		{
			ptr = (*head)->next;
			free(*head);
			*head = ptr;
		}
		*head = NULL;
	}
}
