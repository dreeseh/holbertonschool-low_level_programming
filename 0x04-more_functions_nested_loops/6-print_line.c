#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times _ is printed
 * Return: is void
 */

void print_line(int n)
{
	char line = '_';
	int j = n;

	for (j = 0; j <= n; j++)
	{
		if (j != 0)
			_putchar(line);
	}
	_putchar('\n');
}
