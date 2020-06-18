#include "holberton.h"
/**
 * _isupper - determines if a number is uppercase or not.
 * @c: variable is c
 * Return: is 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
