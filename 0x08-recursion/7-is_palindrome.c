#include "holberton.h"
/**
 * _strlen - returns length of a string
 * @n: pointer to char
 * Return: length of string
 */

int _strlen(char *n)
{
	if (*n == 0)
		return (0);
	else
		return (1 + _strlen(n + 1));
}

/**
 * _ispal - Returns if a string is a palindrome
 * @str: pointer to string
 * @x: int counter
 * Return: 1 if palindrome, 0 if not
 */

int _ispal(char *str, int x)
{
	if (x <= 1)
		return (1);
	if (*str == *(str + x - 1))
		return (_ispal(str + 1, x - 2));
	else
		return (0);
}

/**
 * is_palindrome - recursion function
 * @s: pointer to char
 * Return: 1 if is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_ispal(s, _strlen(s)));
}
