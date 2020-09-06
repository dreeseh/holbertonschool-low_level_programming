#include "holberton.h"
/**
 * _isalpha - checks if c is a letter, lowercase or uppercase.
 * @c: can be a letter, lower or uppercase.
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	int result;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
