#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - length of string
 * @str: string to find length of
 * Return: length of string
 */
int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds a node to the end
 * @head: double pointer to linked list
 * @str: node to be put at end
 * Return: new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *new;

	new = malloc(sizeof(list_t));
	last = *head;
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (new);
}
