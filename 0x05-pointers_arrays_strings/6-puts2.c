#include "holberton.h"

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
