#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the arrary of the has table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
