#include <stdio.h>
#include "lists.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * add_dnodeint - add node to begginning of a list
 * @head: pointer to head of a linked list
 * @i: integer
 * Return: return address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int i)
{
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->n = i;
	p->prev = NULL;
	p->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = p;
	}

	*head = p;
return (p);
}

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node
 * Return: (success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *ptr = head;
        unsigned int n = 0;

        if (ptr == NULL)
        {
                return (NULL);
        }

        while (ptr != NULL)
        {
                if (n == index)
                {
                        break;
                }
                ptr = ptr->next;
                n++;
        }

        if (n < index)
        {
                return (NULL);
        }

return (ptr);
}
