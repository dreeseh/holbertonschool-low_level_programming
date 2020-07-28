#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of list
 * @idx: index of the list where the node is to be added
 * @n: int that holds the data of the list
 * Return: address of the new node or NULL upon fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int step = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		temp = *head;
		for (step = 0 ; step < idx - 1 ; step++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
