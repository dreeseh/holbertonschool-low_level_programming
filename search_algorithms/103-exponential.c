#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: is the value to search for
 *
 * Return: the value we've been searching
 * for or -1 upon failure (NULL array)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	/* Find the exponential bound to search in */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, bound);
		return (binary_search(array, bound / 2, bound, value));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, size - 1);
		return (binary_search(array, bound / 2, size - 1, value));
	}

	/* Binary search within the found bound */
	return (binary_search(array, bound / 2, bound >=
				size ? size - 1 : bound, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @left: Index of the left boundary.
 * @right: Index of the right boundary.
 * @value: Value to search for.
 *
 * Return: The index where value is located,
 * or -1 if value is not present in the array
 */
int binary_search(int *array, int left, int right, int value)
{
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers between the left and right
 *               boundaries.
 *
 * @array: Pointer to the first element of the array to print.
 * @left: Index of the left boundary
 * @right: Index of the right boundary
 *
 * Return: is void
 */
void print_array(int *array, int left, int right)
{
	int i;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}

	printf("\n");
}
