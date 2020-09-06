#include "lists.h"
/**
 * print_dlistint - function that prints all elements of dlinstint_t
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ret_val = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ret_val++;
	}
	return (ret_val);
}
