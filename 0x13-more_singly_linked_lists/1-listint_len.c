#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - returns no of elements in a linked lists
 * @h: pointer to a linked list
 * Return: (Success)
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
}
