#include "holberton.h"
/**
 *
 *
 *
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y != 0)
	{
		return (x * _pow_recursion (x, y - 1));
	}

	else
	{
		return (0);
	}

	result = _pow_recursion (x, y);

	return (result);
}