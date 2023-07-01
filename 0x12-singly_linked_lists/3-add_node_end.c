#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new node at end
 * @head: first node
 * @str: string
 * Return: (Success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
	return (NULL);
	}
	else
	{
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;

	return (*head);
	}
}
