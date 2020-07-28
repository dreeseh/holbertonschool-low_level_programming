#include "lists.h"

/**
 * free_listint - function that frees listint_t
 * @head: pointer to head of list
 * Return: is void
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}
