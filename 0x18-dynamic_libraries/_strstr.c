#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string we're searching in.
 * @needle: string used for search
 * Return: pointer to substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, d;

	/* loops until haystack is 0 */
	while (haystack[a] != 0)
	{
		/* loops until needle is 0 */
		d = a;
		while (needle[b] != 0)
		{
			/* stop if needle is not found in haystack */
			if (haystack[d] != needle[b])
			{
				break;
			}
			d++;
			b++;
		}

		if (needle[b] == 0)
		{
			return ((char *) haystack + a);
		}

		else
		{
			a++;
			b = 0;
		}
	}
	/* if haystack is not found it returns 0 */
	return (0);
}
