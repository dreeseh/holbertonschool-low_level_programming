#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string that is a duplicate of str
 * @str: string to be duplicated
 * Return: a pointer to dup string || NULL
 */

char *_strdup(char *str)
{
	char *new;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		new[j] = str[j];
		j++;
	}

	new[j + 1] = 0;

	return (new);
}
