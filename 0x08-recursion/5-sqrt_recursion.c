#include "holberton.h"

/**
 * sq_root - The square root of a number
 * @x: base
 * @y: power
 * Return: the square root of a number
 */

int sq_root(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (x < y * y)
		return (-1);
	return (sq_root(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: base
 * Return: the square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sq_root(n, 1));
}
