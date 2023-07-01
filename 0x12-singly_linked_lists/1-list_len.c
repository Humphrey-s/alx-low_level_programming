#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns number of elements in a list
 * @h: list
 * Return: (Success)
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
}
