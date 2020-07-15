#include "function_pointers.h"
/**
 * array_iterator - prints inputs
 * @array: numbers to be printed by function
 * @size: array size
 * @action: pointer to our function
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (counter = 0 ; counter < size ; counter++)
	{
		action(array[counter]);
	}
}
