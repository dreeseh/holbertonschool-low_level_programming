#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: is nill.
 *
 */
void puts_half(char *str)
{
/* find length of string */
	int length = 0, count;

	while (str[length] != '\0')
	{
		length++;
	}

/* cut length in half */

	if (length % 2 == 0)
	{
		count = length / 2;
	}

	else
	{
		count = (length + 1) / 2;
	}

	while (count < length)
	{
		_putchar(str[count]);
		count++;
	}

_putchar('\n');
}
