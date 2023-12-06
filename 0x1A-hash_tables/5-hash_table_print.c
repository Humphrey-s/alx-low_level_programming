#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
unsigned long int still_node(hash_table_t *ht, uli i);
/**
 * hash_table_print - print hash table key and values
 * @ht: hash table
 * Return: (Success)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	uli size, i = 0, a, b;

	if (ht == NULL)
		return;

	size = ht->size;
	node = ht->array[0];

	printf("{");
	while (i < size)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			b = 0;

			if (node != NULL)
				printf(", ");
		}
		i++;
		a = i;

		for (; a < size && b == 0; a++)
		{
			if (ht->array[a] != NULL)
			{
				printf(", ");
				break;
			}
		}
		b = -1;
	}
	printf("}\n");
}
