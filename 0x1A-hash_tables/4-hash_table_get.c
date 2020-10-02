#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table im looking into
 * @key: the key im looking for
 * Return: the value associated with the element or  NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	new = ht->array[index];
	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
