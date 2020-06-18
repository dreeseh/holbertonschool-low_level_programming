#include "holberton.h"
/**
 * print_sign - prints +, 0, or -
 * @n: +0- for num being greater equal to or less than zero.
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar('+');
result = 1;
}
else if (n < 0)
{
_putchar('-');
result = -1;
}
else
{
_putchar('0');
result = 0;
}
return (result);
}
