#include "lists.h"
/**
 * free_dlistint - frees memory in dlistint_t
 * @head: pointer to beg of list
 * Return: is void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *buffer;

	temp = head;
	while (temp)
	{
		buffer = temp->next;
		free(temp);
		temp = buffer;
	}
}
