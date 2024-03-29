#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: is the hash table
 * Return: is void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *new, *tmp;

	if (ht == NULL)
		return;

	new = ht->array[index];
	tmp = new;

	for (index = 0 ; index < ht->size ; index++)
	{
		new = ht->array[index];
		while (new)
		{
			tmp = new->next;
			free(new->key);
			free(new->value);
			free(new);
			new = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
