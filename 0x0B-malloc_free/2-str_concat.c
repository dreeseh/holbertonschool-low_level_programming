#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first
 * @s2: second
 * Return: NULL on error || concatonated s1 & s2 into s3
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s3;
/* if srting 1 is NULL */
	if (s1 == NULL)
		i = 0;
/* otherwise get string length*/
	else
	{
		for (i = 0 ; s1[i] ; i++)
			;
	}
/* if string 2 is NULL */
	if (s2 == NULL)
		j = 0;
/* otherwise get string 2 length*/
	else
	{
		for (j = 0 ; s2[j] ; j++)
			;
	}
/* get string 3 length*/
	k = i + j + 1;
/* set aside memory for s3 */
	s3 = malloc(k * sizeof(char));
/* return NULL if s3 is NULL */
	if (s3 == NULL)
		return (NULL);
/* concatonate */
	for (l = 0; l < i; l++)
	{
		s3[l] = s1[l];
	}
	for (l = 0; l < j; l++)
	{
		s3[l + i] = s2[l];
	}
/* end loop */
	s3[i + j] = '\0';
	return (s3);
}
