#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
	{
		return;
	}

	putchar('{');

	for (index = 0 ; index < ht->size ; index++)
	{
		if (ht->array[index])
		{
			new = ht->array[index];
			while (new)
			{
				printf("'%s': '%s'", new->key, new->value);
				printf(", ");
				new = new->next;
			}
		}
	}
	printf("}\n");
}
