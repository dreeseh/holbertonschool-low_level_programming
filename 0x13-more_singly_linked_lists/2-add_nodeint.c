#include "lists.h"

/**
 * add_nodeint - moves node n to front
 * @head: node at front
 * @n: node to move
 * Return: address of new node of NULL upon fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
