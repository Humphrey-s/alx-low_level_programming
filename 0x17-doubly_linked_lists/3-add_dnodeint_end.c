#include <stdio.h>
#include "lists.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add node to begginning of a list
 * @head: pointer to head of a linked list
 * @i: integer
 * Return: return address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int i)
{
	dlistint_t *p = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->n = i;
	p->next = NULL;

	if (ptr == NULL)
	{
		p->prev = NULL;

		*head = p;
		return (p);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = p;
	p->prev = ptr;


return (p);
}
