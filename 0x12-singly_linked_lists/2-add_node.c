#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * add_node_end - add node to beginning of a list
 * @head - pointer to beginning of a node
 * @str: string
 * Return: (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;

	*head = new;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		return (*head);
	}
}
