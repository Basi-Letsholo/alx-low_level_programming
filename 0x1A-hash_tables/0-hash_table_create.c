#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: created hash table on success, else NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **new_node = NULL;

	new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t) * size);
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = new_node;

	return (new_hash_table);
}
