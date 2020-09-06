#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: area to copy to
 * @src: srea to copy from
 * @n: bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
