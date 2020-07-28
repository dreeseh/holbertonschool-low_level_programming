#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: double pointer to head of list
 * Return: is void
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
        {
                return;
        }
	while (*head)
	{
		holder = *head;
		*head = (*head)->next;
		free(holder);
	}
	*head = NULL;
}
