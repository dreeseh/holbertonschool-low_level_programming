#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: is null
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
