#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min of array
 * @max: max of array
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	new = malloc(sizeof(int) * (max - min + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0 ; min <= max ; i++, min++)
	{
		new[i] = min;
	}
	return (new);
}
