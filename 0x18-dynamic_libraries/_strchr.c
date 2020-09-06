#include "holberton.h"
/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: character to be found
 * Return: pointer to the 1st occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
