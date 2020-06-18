#include "holberton.h"
/**
 * _abs - always positive
 * @n: description of variable
 * Return: n Returns  the  absolute value of the integer argument
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
if (n == 0)
{
return (0);
}
if (n < 0)
{
return (-n);
}
return (n);
}
