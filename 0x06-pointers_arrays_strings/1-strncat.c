#include "holberton.h"
/**
 * _strncat - works exactly like strncat
 * @src: source
 * @dest: dest
 * @n: int of letters to print
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; src[k] != '\0'; k++)
		;
	if (n > k)
	{
		n = k;
	}
	for (j = 0; j < n;)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
