#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds elements to a hash table
 * @ht: hash_table
 * @key: key
 * @value: value to be stored
 * Return: (On Success) return 1 else return 0
 */
int hash_table_set(hash_table_t *ht, const char *key, UNUSED const char *value)
{
	UNUSED uli index;
	UNUSED char *s_key, *s_value;
	UNUSED hash_node_t *node, *ptr;

	if ((strlen(key) == 0) || (key == NULL) || (ht == NULL))
		return (0);

	node = malloc(sizeof(hash_node_t));

	s_key = (char *)key;
	s_value = (char *)value;
	index = key_index((unsigned char *)key, ht->size);

	if (node == NULL)
		return (0);

	ptr = ht->array[index];
	node->key = s_key;
	node->value = s_value;

	if (ptr == NULL)
	{
		node->next = NULL;
		ptr = node;
	}

	node->next = ptr;
	ht->array[index] = node;
	ptr->next = NULL;

return (1);
}
