#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - gets sum of all elements in a linked lists
 * @head: pointer to the first node of list
 * Return: if empty return 0, else return (success)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
}
