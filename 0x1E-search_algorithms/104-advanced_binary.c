#include "search_algos.h"

/**
 * advanced_binary_recursive - recursive adv binary search
 * @array: the array we are searching
 * @size: size of the array
 * @value: value we are searching for
 * Return: index where value is located or -1
 */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (advanced_binary_recursive(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (advanced_binary_recursive(array, half + 1, value));

	half++;
	return (advanced_binary_recursive(array + half, size - half, value) + half);
}

/**
 * advanced_binary - advanced binary search
 * @array: array we are searching
 * @size: size of array we are searching
 * @value: integer we are searching for
 * Return: -1 or the index of the value we are searching for
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = advanced_binary_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
