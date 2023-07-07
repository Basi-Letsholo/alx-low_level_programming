#include "hash_tables.h"
/**
 * hash_table_print - prints out a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, end;
	hash_node_t *current_node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

		while (current_node != NULL)
		{
			if (!end)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current_node->key, current_node->value);
			end = 0;
			current_node = current_node->next;
		}
	}


	printf("}\n");
}
