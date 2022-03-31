#include "search_algos.h"

/**
 * linear_skip - a search algo with an express lane
 * @list: list of numbers to be searched
 * @value: the value to find in the list
 * Return: a pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tail = list;

	if (!list)
		return (NULL);

	while (tail->express && value > tail->n)
	{
		list = tail;
		tail = tail->express;
		printf("Value checked at index [%lu] = [%d]\n", tail->index, tail->n);
	}
	if (value > tail->n)
	{
		list = tail;
		while (tail->next)
			tail = tail->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			list->index, tail->index);
	tail = tail->next;
	while (list != tail)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
