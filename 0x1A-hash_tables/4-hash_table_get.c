#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated with a key
 * @ht: the hash table
 * @key: the associated key
 * Return: the value associated with the key, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *current_node;
	const unsigned char *key_cp;

	key_cp = (const unsigned char *)key;

	index = key_index(key_cp, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			value = current_node->value;
			return (value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
