#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: int
 * @size: size of unsigned int
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *grid;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	grid = malloc(nmemb * size);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (n = 0 ; n < (nmemb * size) ; n++)
	{
		grid[n] = 0;
	}
	return ((void *)grid);
}
