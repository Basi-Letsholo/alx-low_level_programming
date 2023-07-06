#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: created hash table on success, else NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_hash_table;

    new_hash_table = malloc(sizeof(hash_table_t) * size);
    if (new_hash_table == NULL)
        {
            return (NULL);
        }

    return (new_hash_table);
}
