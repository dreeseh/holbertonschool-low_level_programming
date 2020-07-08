#include "holberton.h"
/**
 * _puts_recursion - impliments puts using putchar
 * @s: pointer to string to be written
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
