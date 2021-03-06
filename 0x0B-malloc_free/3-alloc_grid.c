#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional int array
 * @width: width
 * @height: height
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		array[j] = malloc(width * sizeof(int));
		if (array[j] == NULL)
		{
			for (i = 0; i < j; i++)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			array[j][i] = 0;
	}
	return (array);
}
