#include "holberton.h"
/**
 * jack_bauer - prints every minute of every day
 *
 * Return: always zero
 */

void jack_bauer(void)
{
int hrs;
int min;
for (hrs = 0 ; hrs <= 24 ; hrs++)
{
for (min = 0 ; min <= 59 ; min++)
{
_putchar('0' + hrs / 10);
_putchar('0' + hrs % 10);
_putchar(':');
_putchar('0' + min / 10);
_putchar('0' + min % 10);
_putchar('\n');
}
}
}
