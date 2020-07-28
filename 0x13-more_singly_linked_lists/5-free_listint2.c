#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: double pointer to head of list
 * Return: is void
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	holder = *head;
	while (holder != NULL)
	{
		free(holder);
		holder = holder->next;
	}
	if (head == NULL)
	{
		free(head);
	}
	*head = NULL;
}
