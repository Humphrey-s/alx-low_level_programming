#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
#include <limits.h>
/**
 * hash_table_create - vcreate hash table
 * @size: size of array
 * Return: Return 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	UNUSED uli i = 0;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}

return (new_ht);
}
