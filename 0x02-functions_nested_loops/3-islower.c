#include "holberton.h"
/**
 * _islower - decides if an input is lowercase or not.
 * @c: int
 * Return: 1 if true, 0 if not.
 *
 */

int _islower(int c)
{
int result;
if (c >= 'a' && c <= 'z')
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
