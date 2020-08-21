#include "holberton.h"
/**
 * _strcat - copies one string into another
 * @src: source string
 * @dest: dest string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *q;
	char *p;

	for (q = dest; *q != '\0'; q++)
		;
	for (p = src; *p != '\0'; p++, q++)
		*q = *p;
	*q = '\0';
	return (dest);
}
