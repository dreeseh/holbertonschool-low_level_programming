#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: char for sentence we're reversing
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int loop = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (loop = --length; loop >= 0 ; loop--)
	{
		_putchar(s[loop]);
	}
	_putchar('\n');
}
