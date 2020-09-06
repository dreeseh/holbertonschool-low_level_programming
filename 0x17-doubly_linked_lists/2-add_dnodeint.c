#include "lists.h"
/**
 * add_dnodeint - add a node to beginning of list
 * @head: double pointer to head of list
 * @n: value to add into the head of the list
 * Return: address of new elemsnt or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
