#include "holberton.h"
/**
 * print_numbers - prints 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
	_putchar('0' + c);
	c++;
	}
	_putchar('\n');
	return (0);
}
