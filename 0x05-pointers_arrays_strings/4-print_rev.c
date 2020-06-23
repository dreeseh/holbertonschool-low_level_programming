#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: char for sentence we're reversing
 * Return: nothing
 */
void print_rev(char *s)
{
	int ticker = 0;

while (s[ticker] != '\0')
{
	ticker++;
}
while (ticker >= 0)
{
	_putchar(s[ticker]);
	ticker--;
}
_putchar('\n');
}
