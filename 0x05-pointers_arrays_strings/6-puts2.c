#include "holberton.h"
/**
 * puts2 - prints every other line
 * @str: string
 * Return: zero
 */
void puts2(char *str)
{
	int kit = 0;

	while (*str != '\0')
	{
		if (kit % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		kit++;
	}
	_putchar(10);
}
