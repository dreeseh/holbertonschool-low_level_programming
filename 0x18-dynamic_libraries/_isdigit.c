#include "holberton.h"
/**
 * _isdigit - cheaks for a digit 0-9
 * @c: variable c
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
