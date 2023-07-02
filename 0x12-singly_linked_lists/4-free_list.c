#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * free_list - frees allocated lists
 * @head: list
 * Return: (Success)
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
	{
		free(head);
	}
	else
	{
	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
	free(head);
	}
}
