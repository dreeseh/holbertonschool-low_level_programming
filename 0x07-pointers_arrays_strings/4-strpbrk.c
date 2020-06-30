#include "holberton.h"
/**
 * _strpbrk - return a pointer to the byte in s that matches accept
 * @s: used to search accept
 * @accept: string to be searched
 * Return: a pointer in byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j, pos, flag = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	pos = i;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
