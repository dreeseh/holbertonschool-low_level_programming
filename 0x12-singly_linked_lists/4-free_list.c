#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list - function that frees a list_t list
 *@head: beginning of linked list
 * Return: is void
 */

void free_list(list_t *head)
{
	list_t *holder;

	holder = head;
	while (holder != NULL)
	{
		free(holder->str);
		free(holder);
		holder = holder->next;

		if (head == NULL)
		{
			free(head);
		}
	}
}
