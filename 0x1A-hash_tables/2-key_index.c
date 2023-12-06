#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - generate index where string is to be stored 
 * @key: key
 * @size: size of hash_table
 * Return: returns index where string is stored or is to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	uli hash_v;
	uli index;

	if (key == NULL)
		exit(EXIT_FAILURE);

	hash_v = hash_djb2(key);
	index = hash_v % size;

	return (index);
}
