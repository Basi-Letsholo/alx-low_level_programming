#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add to/update
 * @key: key (non-empty string)
 * @value: value associated with key
 * Return: 1 on success, else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *new_node = NULL;
	char *value_cp;
	const unsigned char *key_cp;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	value_cp = strdup(value);
	key_cp = (const unsigned char *)key;
	index = key_index(key_cp, ht->size);

	current_node = malloc(sizeof(hash_node_t));
	if (current_node == NULL)
	{
		return (0);
	}

	current_node->key = strdup(key);
	current_node->value = value_cp;
	current_node->next = NULL;

	/* if index NUll, add value, BUT if not, add new value to linked list */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = current_node;
	}
	else
	{
		new_node = ht->array[index];
		current_node->next = new_node;
		ht->array[index] = current_node;
	}

	return (1);
}
