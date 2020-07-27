#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the start of the list
 * @n: pointer to the int from 3-main.c
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	last = *head;
	new->n = n;
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
