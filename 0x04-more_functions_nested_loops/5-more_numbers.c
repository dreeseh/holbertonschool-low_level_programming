#include "holberton.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: is void
 *
 */

void more_numbers(void)
{
	int x, y;
/* print 10x */
	for (x = 0 ; x <= 9 ; x++)
	{


/* print to 14 */
		for (y = 0 ; y <= 14 ; y++)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}

}
