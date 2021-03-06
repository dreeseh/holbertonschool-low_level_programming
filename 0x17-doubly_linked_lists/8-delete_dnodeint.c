#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int step;

	if (*head == NULL)
		return (-1);

	temp = *head;
	for (step = 0 ; step < index && temp != NULL ; step++)
	{
		temp = temp->next;
	}

	if (index - step == 0 && temp != NULL)
	{
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		if (temp->prev != NULL)
			temp->prev->next = temp->next;
		if (temp == *head)
			*head = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
