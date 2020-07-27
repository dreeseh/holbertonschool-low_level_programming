#include "lists.h"

/**
 * free_listint - function that frees listint_t
 * @head: pointer to head of list
 * Return: is void
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	holder = head;
	while (holder != NULL)
	{
		free(holder);
		holder = holder->next;

		if (head == NULL)
		{
			free(head);
		}
	}
}
