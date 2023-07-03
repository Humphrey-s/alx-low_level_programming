#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes beginnining node
 * @head: pointer to first node
 * Return: (Success)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = temp;
		return (i);
	}
}
