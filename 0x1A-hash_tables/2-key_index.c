#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @size: size of the array of the hash table
 * @key: key
 * Return: index at which the key/value pair is stored in the hash table array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;

	return (key_index);
}
