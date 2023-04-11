#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long h_value;

	h_value = hash_djb2(key);
	return (h_value % size);
}
