#include "lists.h"
#include <stdarg.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
