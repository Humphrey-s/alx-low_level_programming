#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node to beginning of a list
 * @head: pointer to first node
 * @n: integer
 * Return: (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
	}
}
