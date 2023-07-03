#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a list
 * @head: pointer to a list
 * Return: (Success)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		free(head);
	}
	else
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
