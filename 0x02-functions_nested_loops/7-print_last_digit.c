#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a given input.
 * @int - given int from main.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
_putchar('0' + -n);
return (-n);
}
if (n > 0)
{
_putchar('0' + n);
return (n);
}
if (n == 0)
{
_putchar('0' + n);
}
return (n);
}
