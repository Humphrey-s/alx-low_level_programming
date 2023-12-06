#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves values from hash table 
 * @ht: hash table
 * @key: key
 * Return: return values based on keys
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	uli index;
	hash_node_t *node;

	if ((key == NULL) || (strlen(key) == 0))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, (char *)key) == 0)
			return (node->value);

		node = node->next;
	}

return (NULL);
}
