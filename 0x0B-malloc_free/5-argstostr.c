#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: integer
 * @av: double pointer
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *point;
	int x, y, z = 0;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x]; x++, z++)
			;
	}

	point = malloc((z + ac + 1) * sizeof(char));

	if (point == NULL)
	{
		return (NULL);
	}

	z = 0;

	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x]; x++, z++)
		{
			point[z] = av[y][x];
		}

		point[z++] = '\n';

		if (y == ac - 1)
		{
			point[z++] = '\0';
		}
	}
	return (point);
}
