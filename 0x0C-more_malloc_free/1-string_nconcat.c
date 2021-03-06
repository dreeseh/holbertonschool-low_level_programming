#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: pointer to new concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; j < n; j++)
		;
	s3 = malloc(sizeof(char) * i + ++j);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
