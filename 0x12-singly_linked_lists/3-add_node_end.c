#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end
 * @head: double pointer to linked list
 * @str: node to be put at end
 * Return: new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *new;
	unsigned int size = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	last = *head;
	new->str = strdup(str);
	while (str[size])
	{
		size++;
	}
	new->len = size;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (*head);
}
