#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * @
 * Return: void
 */

void times_table(void)
{
	int leftnum, rightnum, sum, d;

	for (leftnum = 0 ; leftnum < 10 ; leftnum++)
	{
		for (rightnum = 0 ; rightnum < 10 ; rightnum++)
		{
			sum = (leftnum * rightnum);

			if (sum < 10 && rightnum != 0)
		{
			_putchar(' ');
		}
			if (sum < 10)
			{
				_putchar('0' + sum);
			}
			else
			{
				d = sum / 10;
				_putchar('0' + d);
				d = sum % 10;
				_putchar('0' + d);
			}
			if (rightnum == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
}
	}
}
