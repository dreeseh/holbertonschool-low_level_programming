#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer from main.c
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
