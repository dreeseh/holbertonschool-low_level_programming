#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
 * add_node - adds a node to beginning of list
 * @head: double pointer to linked list
 * @str: node to be added
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = (*head);
	(*head) = new;
	return (new);
}
