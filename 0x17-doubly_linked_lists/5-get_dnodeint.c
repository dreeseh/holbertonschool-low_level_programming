#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of the lsit
 * @head: pointer to head of list
 * @index: index of the node starting at 0
 * Return: the nth node of the list or NULL if node is NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0 ; i < index ; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
