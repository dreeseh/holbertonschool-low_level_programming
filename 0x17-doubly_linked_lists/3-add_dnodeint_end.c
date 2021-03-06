#include "lists.h"
/**
 * add_dnodeint_end - adds new node to end of list
 * @head: double pointer to head of list
 * @n: value from main file
 * Return: addr of new element or NULL upon fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;
	return (new);
}
