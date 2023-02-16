#include "hash_tables.h"

/**
* shash_table_create - creates a new hash table
* @size: size of the hash table
* Return: a pointer to the newly created hash table or NULL
**/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_hash = malloc(sizeof(shash_table_t));
	if (!new_hash)
		return (NULL);

	new_hash->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_hash->array)
	{
		free(new_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;

	new_hash->size = size;
	new_hash->shead = NULL;
	new_hash->stail = NULL;
	return (new_hash);
}

/**
* add_sorted_node - adds sorted nodes onto a doubly llist of a hashtable
* @head: the head of the llist
* @tail: the end of the llist
* @new_node: the new node to be added
* Return: pointer to the new node
**/
shash_node_t *add_sorted_node(shash_node_t **head, shash_node_t **tail,
			       shash_node_t *new_node)
{
	shash_node_t *current;

	if (!*head)
	{
		*head = new_node, *tail = new_node;
		return (new_node);
	}
	if (strcmp((*head)->key, new_node->key) > 0)
	{
		new_node->snext = *head, (*head)->sprev = new_node, *head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->snext)
	{
		if (strcmp(current->key, new_node->key) < 0 &&
		    strcmp(current->snext->key, new_node->key) >= 0)
		{
			new_node->snext = current->snext, current->snext->sprev = new_node;
			current->snext = new_node, new_node->sprev = current;
			return (new_node);
		}
		current = current->snext;
	}
	current->snext = new_node, new_node->sprev = current, *tail = new_node;
	return (new_node);
}

/**
* shash_table_set - inserts key/value pair in sorted list
* @ht: the hash table you want to add or update the key/value to
* @key: is the key. key can not be an empty string
* @value: is the value associated with the key
* Return: 1 on success 0 upon failure
**/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, (char *)key) == 0)
			{
				free(current->value);
				current->value = (char *)strdup(value);
				return (1);
			}
			current = current->next;
		}
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = (char *)strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->sprev = new_node->snext = NULL;
	add_sorted_node(&ht->shead, &ht->stail, new_node);
	new_node->next = ht->array[index], ht->array[index] = new_node;
	return (1);
}

/**
* shash_table_get - retrieves a value associated with a key
* @ht: is the hash table you want to look into
* @key: is the key you are looking for
* Return: key value or NULL
**/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *new;

	if (ht == NULL || key == NULL)
		return (NULL);

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			new = ht->array[index];
			while (new)
			{
				if (strcmp(new->key, (char *)key) == 0)
					return (new->value);
				new = new->next;
			}
		}
	}
	return (NULL);
}

/**
* shash_table_print - prints hash table using sorted list
* @ht: pointer to hash table
* Return: nothing
**/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht)
	{
		current = ht->shead;
		printf("{");
		while (current)
		{
			if (!current->snext)
				printf("'%s': '%s'", current->key, current->value);
			else
				printf("'%s': '%s', ", current->key, current->value);
			current = current->snext;
		}
		printf("}\n");
	}
}

/**
* shash_table_print_rev - print the hash table keys/values in reverse order
* using the sorted linked list
* @ht: pointer to hash table
* Return: nothing
**/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht)
	{
		current = ht->stail;
		printf("{");
		while (current)
		{
			if (!current->sprev)
				printf("'%s': '%s'", current->key, current->value);
			else
				printf("'%s': '%s', ", current->key, current->value);
			current = current->sprev;
		}
		printf("}\n");
	}
}

/**
* shash_table_delete - deletes a hash table
* @ht: pointer to hash table
* Return: nothing
**/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (!ht)
		return;

	current = ht->shead;
	while (current)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = NULL;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
