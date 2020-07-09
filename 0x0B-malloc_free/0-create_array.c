#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes with a char
 * @size: size of int
 * @c: char
 * Return: pointer to the array || NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *string_ptr;

	string_ptr = malloc(sizeof(char) * size);

	if (size == 0 || string_ptr == NULL)
	{
		return (0);
	}

	for (j = 0 ; j < size ; j++)
	{
		string_ptr[j] = c;
	}

	return (string_ptr);
}
