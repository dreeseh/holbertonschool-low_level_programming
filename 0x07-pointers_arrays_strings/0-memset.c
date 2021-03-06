#include "holberton.h"
/**
 * _memset - fills the first n bytes of mem with byte b
 * @s: memory area
 * @b: byte that fills n
 * @n: memory pointed to by s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* fill "n" blocks with char b  */
	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
