#include "holberton.h"
/**
 * _puts_recursion - impliments puts using putchar
 * @s: pointer to string to be written
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (s && *s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
