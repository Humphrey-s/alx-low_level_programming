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

	list_t *ptr = *head;

	if (new == NULL)
	{
	return (NULL);
	}
	else
	{
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
	}
	}
}
