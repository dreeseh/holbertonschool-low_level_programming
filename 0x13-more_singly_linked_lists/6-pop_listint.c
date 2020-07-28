#include "lists.h"

/**
 * pop_listint - deleted the head node of listint_t
 * @head: double pointer to head of list
 * Return: data from head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return (n);
}
