#include "holberton.h"
#include <stdio.h>

/**
 * prime_num - prime or no
 * @a: int
 * @b: int
 * Return: 1 if int, 0 if not
 */

int prime_num(int b, int a)
{
	if (a == 1)
		return (a);
	if (b % a == 0)
		return (0);
	else
		return (prime_num(b, a - 1));
}

/**
 * is_prime_number - returns primes
 * @n: int
 * Return: int if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_num(n, n - 1));
}
