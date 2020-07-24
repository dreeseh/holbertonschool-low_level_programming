#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a node to beginning of list
 * @head: double pointer to linked list
 * @str: node to be added
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	while (str[size])
	{
		size++;
	}
	new->len = size;
	new->next = (*head);
	(*head) = new;
	return (new);
}
