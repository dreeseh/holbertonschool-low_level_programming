#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: char pointer (dest)
 * @src: char pointer (source)
 * @n: int as the input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
