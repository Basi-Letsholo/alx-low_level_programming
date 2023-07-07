#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: created hash table on success, else NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **array;

	new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	new_hash_table->size = size;
	new_hash_table->array = array;

	return (new_hash_table);
}
