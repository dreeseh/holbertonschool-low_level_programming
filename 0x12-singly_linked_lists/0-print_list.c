#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints list nodes
 * @h: list node items
 * Return: count of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			printf("\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
