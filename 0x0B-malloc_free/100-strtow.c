#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - splits a string into words
 * @str: pointer to srting to split up
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, l, length, counter;

	counter = k = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			counter++;
	}
	if (counter == 0)
		return (NULL);
	array = malloc(((counter + 1) * sizeof(char *)));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] !=  '\0' && k < counter; i++)
	{
		if (str[i] != ' ')
		{
			length = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, length++;
			array[k] = malloc((length + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
					free(array);
					return (NULL);
			}
			for (l = 0; l < length; l++, i++)
				array[k][l] = str[i];
			array[k++][l] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
