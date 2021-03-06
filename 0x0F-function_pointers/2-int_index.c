#include "function_pointers.h"
/**
 * int_index - returns the index of the 1st element that cmp does not return 0
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the 1st element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (counter = 0 ; counter < size ; counter++)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
	}
	return (-1);
}
