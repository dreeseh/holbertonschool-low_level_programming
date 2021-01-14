#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, we return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, j, left = 0, right = size - 1;

	if (!value || array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}
		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		else if (value > array[j])
			left = j + 1;
		else if (value < array[j])
			right = j - 1;
	}
	return (-1);
}
