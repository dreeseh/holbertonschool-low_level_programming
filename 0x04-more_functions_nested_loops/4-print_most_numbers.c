#include "holberton.h"
/**
 * print_most_numbers - prints 0-9 except 2 & 4
 *
 * Return: is void
 *
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{;
		if (n != 2 && n != 4)
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
