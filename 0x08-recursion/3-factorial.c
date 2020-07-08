#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: int from main file
 * Return: int
 */
int factorial(int n)
{
	if (n == 1)
		return (1);

	if (n > 1)
		return (n * factorial(n - 1));

	else
		return (-1);
}
