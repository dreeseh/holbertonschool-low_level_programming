#include "lists.h"
/**
 * insert_dnodeint_at_index - addns new node at idx
 * @h: double pointer to head
 * @idx: index position for new node
 * @n: new node
 * Return: addr of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	else
		temp = *h;
	while (index != idx - 1)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			index++;
		}
		else
			return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
