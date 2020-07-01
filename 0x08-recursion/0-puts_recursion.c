#include "holberton.h"
/**
 *
 *
 *
 */

void _puts_recursion(char *s)
{
	while (s && *s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
