#include "lists.h"
/**
 * sum_listint - adds data of linked list
 * @head: pointer to head of list
 * Return: the sum of the data from listint_t
 */
int sum_listint(listint_t *head)
{
	listint_t *pointer;
	int sum = 0;

	pointer = head;
	while (pointer != NULL)
	{
		sum += pointer->n;
		pointer = pointer->next;
	}
	return (sum);
}
