#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array using the Jump search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), previous = 0, i = 0, j;

	if (!array || !size)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}

	previous = i - step;
	printf("Value found between indexes [%lu] and [%lu]\n", previous, i);

	for (j = previous ; j < size ; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
