#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * add_node - add node to beginning of a list
 * @head: pointer to beginning of a node
 * @str: string
 * Return: (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
	free(new);
	return (NULL);
	}
	else
	{
	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;

	*head = new;

	return (*head);
	}
}
