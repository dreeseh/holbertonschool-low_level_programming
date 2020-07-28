#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to head of list
 * @index: point to delete node
 * Return: 1 if succeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *following;
	unsigned int step;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}
	for (step = 0 ; step < index - 1 ; step++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	following = temp->next->next;
	free(temp->next);
	temp->next = following;
	return (1);
}
