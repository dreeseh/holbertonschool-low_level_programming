#include "lists.h"
/**
 * dlistint_len - returns # of elements
 * @h: pointer to elements
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ret_val = 0;

	while (h != NULL)
	{
		h = h->next;
		ret_val++;
	}
	return (ret_val);
}
