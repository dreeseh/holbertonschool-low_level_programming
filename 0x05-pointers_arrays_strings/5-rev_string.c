#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: stores Holberton
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, i;
	char *begin, *end, ch;

	/* finds the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* sets pointers to start of string */
	begin = s;
	end = s;

	/* move end pointer to last character */
	for (i = 0 ; i < length - 1 ; i++)
	{
		end++;
	}

/* swap char from start & end */
/* index using begin & end pointers */
	i = 0;
	while (i < length / 2)
	{
		i++;
		/* swap characters */
		ch = *end;
		*end = *begin;
		*begin = ch;

		/* update pointer positions */
		begin++;
		end--;
	}
}
