#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: is void
 */

void print_triangle(int size)
{
	int j, i, x = size;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			x--;

			for (i = 0; i < size; i++)
			{

				if (i < x)
				{
					_putchar(' ');
				}

				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}

}
