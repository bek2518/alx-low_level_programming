#include "hash_tables.h"

/**
 * hash_table_get - retreives a value associated with key
 * @ht: hash table array
 * @key: key
 * Return: value associated with the key
 * or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
